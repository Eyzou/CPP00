/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:16:25 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 14:39:29 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string   Contact::getInputs(std::string question)
{
	std::string input="";
	bool valid = false;

	while(!valid)
	{
		std::cout << question << std::endl;
		std::getline(std::cin, input); 
		if(std::cin.good() && !input.empty()) //check si en bon etat et si pas vide
			valid = true;
		else
		{
			std::cin.clear(); // -clear errors flag (or cin.ignore(1000)) ?
			std::cout <<"Invalid input, please try again" << std::endl;
		}
	}
	return(input);
}

void	Contact::setInfos()
{
	this-> m_firstName = this->getInputs("Please enter your First Name:");
	this-> m_lastName = this->getInputs("Please enter your Last Name:");
	this-> m_nickName = this->getInputs("Please enter your Nickmame:");
	this-> m_phoneNumber = this->getInputs("Please enter your Phone Number:");
	this-> m_darkestSecret = this->getInputs("Please enter your Darkest Secret:");
	std::cout << std::endl;
}
std::string Contact::getFirstName()  
{
	return m_firstName;
}

std::string Contact::getLastName()
{
	return m_lastName;
}

std::string Contact::getNickName() 
{
	return m_nickName;
}

std::string Contact::getPhoneNumber()
{
	return m_phoneNumber;
}

std::string Contact::getDarkestSecret() 
{ 
	return m_darkestSecret;
}