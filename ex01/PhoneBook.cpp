/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:18:57 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 11:37:20 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_size(8)
{
	p_contacts = new Contact[m_size];
}

PhoneBook::~PhoneBook()
{
}

int     PhoneBook::getPhoneBookSize()
{
    PhoneBook.size
}

void    PhoneBook::addContacts()
{}

void   PhoneBook::displayContacts()
{
	for(int i = 0; i < m_size ; i++)
	{
		std::cout << p_contacts[i].getFirstName();
		std::cout << p_contacts[i].getLastName();
		std::cout << p_contacts[i].getNickName();
		std::cout << std::endl;
	}
}

void    PhoneBook::exitPhoneBook()
{}
