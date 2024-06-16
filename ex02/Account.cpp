//
// Created by eyza on 14/06/24.
//

#include "Account.hpp"

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += this->_amount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _totalAmount << ";created" << std::endl;
}

Account::~Account()
{
    _nbAccounts--;
    _totalAmount = this->_amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _totalAmount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(0);
    std::tm *local_timer = std::localtime(&now);
    std::cout << std::put_time(local_timer,"%Y%m%d_%H%M%S");
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}


static void	Account::displayAccountsInfos( void )
{

}
