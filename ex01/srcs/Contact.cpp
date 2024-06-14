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

std::string   Contact::getInputs(std::string question,std:: function<bool(char)> validator, int len)
{
    std::string input="";
    bool valid = false;

    while(!valid)
    {
        std::cout << question << std::endl;
        std::getline(std::cin, input);
        bool isValid = true;
        for(char c : input)
        {
            if(!validator(c))
            {
                isValid = false;
                break;
            }
        }
        if(std::cin.good() && !input.empty() && isValid && (len == 0 || input.length() == len))
            valid = true;
        else
        {
            std::cin.clear(); //reset the error flags of the input stream
            std::cout <<"Invalid input, please try again" << std::endl;
        }
    }
    return(input);
}

void	Contact::setInfos()
{
	std::cin.ignore(); // a utiliesr pour cleaner le stdinput des input precedents super useful!!
	this-> m_firstName = this->getInputs("Please enter your First Name:", ::isalpha);
	this-> m_lastName = this->getInputs("Please enter your Last Name:", ::isalpha);
	this-> m_nickName = this->getInputs("Please enter your Nickmame:", ::isalpha);
	this-> m_phoneNumber = this->getInputs("Please enter your Phone Number:", ::isdigit,10);
	this-> m_darkestSecret = this->getInputs("Please enter your Darkest Secret:", ::isprint);
	std::cout << std::endl;
}

void Contact::setIndex(int index)
{
	this->m_index = index;
}

std::string Contact::print(std::string str)
{
    if(str.length() > 10)
    {
        str.resize(9);
        str.append(".");
    }
    return(str);
}

void	Contact::view(int index)
{
	if(this->m_firstName.empty() || this->m_lastName.empty() || this->m_nickName.empty())
		return;
    std::cout << "|" << std::setw(10) << "INDEX" << std::flush;
	std::cout << "|" << std::setw(10) << "FIRST NAME"<< std::flush;
	std::cout << "|" << std::setw(10) << "LAST NAME"<< std::flush;
	std::cout << "|" << std::setw(10) << "NICK NAME"<< std::flush;
	std::cout << "|" << std::endl ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->print(this->m_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->print(this->m_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->print(this->m_nickName) << std::flush;
	std::cout << "|" << std::endl ;
}

void	Contact::display(int index)
{
	if(this->m_firstName.empty() || this->m_lastName.empty() || this->m_nickName.empty())
		return;
	std::cout << "Contact index: " << index << std::endl;
	std::cout << "First Name: " << m_firstName << std::endl;
	std::cout << "Last Name: " << m_lastName << std::endl;
	std::cout << "Nick Name: " << m_nickName << std::endl;
}
