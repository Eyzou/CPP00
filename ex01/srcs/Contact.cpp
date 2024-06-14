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

# include "../includes/main.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string   Contact::getInputsName(std::string question)
{
	std::string input="";
	bool valid = false;

	while(!valid)
	{
		std::cout << question << std::endl;
		std::getline(std::cin, input); 
		if(std::cin.good() && !input.empty() && std::all_of(input.begin(), input.end(), ::isalpha))
			valid = true;
		else
		{
			std::cin.clear(); // -clear errors flag (or cin.ignore(1000)) ?
			std::cout <<"Invalid input, please try again" << std::endl;
		}
	}
	return(input);
}

std::string   Contact::getInputsNumber(std::string question)
{
	std::string input="";
	bool valid = false;

	while(!valid)
	{
		std::cout << question << std::endl;
		std::getline(std::cin, input);
		if(std::cin.good() && !input.empty() && std::all_of(input.begin(), input.end(), ::isdigit) && input.length() == 10)
			valid = true;
		else
		{
			std::cin.clear();
			std::cout <<"Invalid input, please try again" << std::endl;
		}
	}
	return(input);
}

void	Contact::setInfos()
{
	this-> m_firstName = this->getInputsName("Please enter your First Name:");
	this-> m_lastName = this->getInputsName("Please enter your Last Name:");
	this-> m_nickName = this->getInputsName("Please enter your Nickmame:");
	this-> m_phoneNumber = this->getInputsNumber("Please enter your Phone Number:");
	this-> m_darkestSecret = this->getInputsName("Please enter your Darkest Secret:");
	std::cout << std::endl;
}

void	Contact::display(int index)
{
	if(this->m_firstName.empty() || this->m_lastName.empty() || this->m_nickName.empty())
	{
		std::cout << "No contact at this index, exiting the search command ..." << std::endl;
		return;
	}
	std::cout << "Contact index: " << index << std::endl;
	std::cout << "First Name: " << m_firstName << std::endl;
	std::cout << "Last Name: " << m_lastName << std::endl;
	std::cout << "Nick Name: " << m_nickName << std::endl;
}

void Contact::setIndex(int index)
{
	this->m_index = index;
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