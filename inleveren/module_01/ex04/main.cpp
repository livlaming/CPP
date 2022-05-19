//
// Created by Lisa Vlamings on 2/17/22.
//

#include <string>
#include <iostream>
#include <fstream>

void    ReplaceString(std::string *line, char *argv[]){
    size_t pos = 0;
    std::string S1 = argv[2];
    std::string S2 = argv[3];
    static int lenS1 = S1.length();

    pos = (*line).find(S1, pos);
    while (pos != std::string::npos){
        (*line).erase(pos, lenS1);
        (*line).insert(pos, S2);
        pos = (*line).find(S1, pos + 1);
    }
}

int     ReadFile(char *argv[], std::string NewFileName){
    std::string line;
    std::ifstream ini_file(argv[1]);
    std::ofstream out_file(NewFileName);
    if (ini_file && out_file){
        getline(ini_file,line, '\0');
        while(ini_file){
            ReplaceString(&line, argv);
            out_file << line;
            if (getline(ini_file,line, '\0'))
                out_file << '\n';
        }
    }
    else {
        printf("Cannot open or read File");
        ini_file.close();
        out_file.close();
        return (-1);
    }
    ini_file.close();
    out_file.close();
    return (0);
}

int     main(int argc, char *argv[]){
    std::string NewFileName;

    if (argc != 4){
        std::cout << "Invalid input" << std::endl;
        return (-1);
    }
    NewFileName = argv[1];
    NewFileName.append(".replace");
    if (ReadFile(argv, NewFileName) != 0)
        return (-1);
    return (0);
}
