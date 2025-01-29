
#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return(_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " Accounts: "<< getNbAccounts() << ";"
    << " Total: " << getTotalAmount() << ";"
    << " Deposits: " << getNbDeposits() << ";"
    << " Withdrawals: " << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
    _nbAccounts += 1;
    this->_accountIndex = _nbAccounts - 1;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_nbWithdrawals = 0;
    this->_totalAmount += initial_deposit;
    
    _displayTimestamp();
    std::cout<< " Index: "<< this->_accountIndex << ";"
    << " Amount: "<< this->_amount << ";"
    << " Created: "<< std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " Index: " << this->_accountIndex << ";"
        << " Amount :" << this->_amount <<";"
        << " Closed " << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " Index: " << this->_accountIndex << ";"
        << " p_amount: " << this->_amount << ";";
    
    this->_amount += deposit;
    this->_nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    
    std::cout<< " Deposit: " << deposit << ";"
        << " Amount: "<< this->_amount << ";"
        << " nb_deposits: " << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    
    std::cout<< " Index: " << this-> _accountIndex<< ";"
    << " p_amount: " << this->_amount<< ";";
    
    this->_amount -= withdrawal;
    if (checkAmount())
    {
        this->_amount += withdrawal;
        std::cout<< " Withdrawal:refused " << std::endl;
        return false;
    }
    _totalAmount -= withdrawal;
    this->_nbWithdrawals += 1;
    
    std::cout<< " Withdrawal: " << withdrawal << ";"
    << " Amount: " << this->_amount<< ";"
    <<" nb_withdrawals: " << this->_nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const
{
    return(this->_amount);
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout<< " Index:" << this->_accountIndex << ";"
    << " Amount: " << this->_amount << ";"
    << " Deposits: " << this->_nbDeposits << ";"
    << " Withdrawals: " << this->_nbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t  tim;
    struct tm* tm;
    
    std::time(&tim);
    tm = localtime(&tim);
    
    std::cout << "[" << tm->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec;
    std::cout<< tm->tm_sec <<"] ";
}
