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

# include "../includes/main.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::addContacts()
{
	int i = 0 ;
	this-> m_contacts[i%8].setInfos();
	this-> m_contacts[i%8].setIndex(i%8);
	i++;
}

void   PhoneBook::displayContacts()
{
	for(int i = 0; i < 8 ; i++)
		this->m_contacts[i].view(i);
	std::cout << std::endl;
}

int    PhoneBook::validIndex(void)
{
	int input = -1;
	bool valid = false;
	while(!valid)
	{
		std::cout << "Please enter the index of the contact:" << std::endl;
		std::cin>> input;
		if(std::cin.good() && (input >= 0 && input < 8))
			valid = true;
		else
		{
		std::cin.clear();
		std::cout << "Invalid index, please try again" << std::endl;
		}
	}
	return(input);
}

void   PhoneBook::searchContacts()
{
	int i = this->validIndex();
	this->m_contacts[i].display(i);
}