#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
//    const AAnimal Abstract; <-- Should not work!
//    const AAnimal* A = new AAnimal(); <-- Should not work!

    const AAnimal* Various[5];
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            Various[i] = new Dog();
        else
            Various[i] = new Cat();
    }
    for (int i = 0; i < 5; i++){
        std::cout << Various[i]->getType() << std::endl;
    }

    delete j;//should not create a leak
    delete i;
    for (int i = 0; i < 5; i++)
        delete Various[i];
    system("leaks ex02");
    return 0;
}
