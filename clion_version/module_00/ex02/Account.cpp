//
// Created by Lisa Vlamings on 2/4/22.
//

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    this->_accountIndex = getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";created" << std::endl;
    _nbAccounts++;
}

Account::Account( void ){}

int     Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int     Account::getTotalAmount( void ){
    return (_totalAmount);
}

int     Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int     Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp( void ){
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    std::cout << "["<< 1900 + local_time->tm_year ;
    std::cout << std::right << std::setfill('0')
    << std::setw(2) << 1 + local_time->tm_mon
    << std::setw(2) << local_time->tm_mday
    << "_"<< 1 + local_time->tm_hour
    << std::setw(2) << 1 + local_time->tm_min
    << std::setw(2) << 1 + local_time->tm_sec << "]";
}

void    Account::displayAccountsInfos( void ){
    _displayTimestamp();

    std::cout << " accounts:" << getNbAccounts()
    << ";total:" << getTotalAmount()
    << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus() const {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";p_amount:" << this->_amount
              << ";deposit:" << deposit
              << ";amount:" << this->_amount + deposit
              << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
}

int		Account::checkAmount( void ) const{
    if (this->_amount < 0) {
        std::cout << "refused" << std::endl;
        return (0);
    }
    return (1);
}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";p_amount:" << this->_amount
              << ";withdrawal:" ;
    this->_amount -= withdrawal;
    if (checkAmount() == 0){
        this->_amount += withdrawal;
        return(false);
    }
    else
        std::cout <<  withdrawal << ";amount:" << this->_amount
                  << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    return(true);
}

//bool    Account::makeWithdrawal(int withdrawal) {
//    _displayTimestamp();
//    std::cout << " index:" << this->_accountIndex
//              << ";p_amount:" << this->_amount
//              << ";withdrawal:" ;
//    if (this->_amount - withdrawal < 0){
//        std::cout << "refused" << std::endl;
//        return(false);
//    }
//    else
//        std::cout <<  withdrawal << ";amount:" << this->_amount - withdrawal
//                  << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
//    this->_amount -= withdrawal;
//    _totalAmount -= withdrawal;
//    this->_nbWithdrawals++;
//    _totalNbWithdrawals++;
//    return(true);
//}

Account::~Account(void){
        _displayTimestamp();
        std::cout << " index:" << this->_accountIndex
                  << ";amount:" << this->_amount
                  << ";closed" << std::endl;
}
