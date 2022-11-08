/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:37:04 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/01 10:00:41 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


//fonction public


Account::Account(int initial_deposit)	//constructeur
{
	
}

Account::~Account(void)					//destructeur
{

}



int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}



void	Account::displayAccountsInfos(void)
{

}



void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int		Account::checkAmount(void) const
{

}

void	Account::displayStatus( void ) const
{
	
}


//		partie prive

void	Account::_displayTimestamp( void )
{

}

Account::Account(void)
{
	
}