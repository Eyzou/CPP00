/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:18:57 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 14:43:12 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

// int     PhoneBook::getPhoneBookSize()
// {
//     PhoneBook.m_size;
// }

void    PhoneBook::addContacts()
{
	int i = 0 ;
	this-> contacts[i%8].setInfos();
	i++;
}

void   PhoneBook::displayContacts()
{
	for(int i = 0; i < 8 ; i++)
	{
		std::cout << contacts[i].getFirstName();
		std::cout << contacts[i].getLastName();
		std::cout << contacts[i].getNickName();
		std::cout << std::endl;
	}
}

void    PhoneBook::exitPhoneBook()
{}
