/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:16:25 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 10:29:21 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
void	Conctact::setInfos(std::string firstName,std::string lastName,std::string nickName,std::string phoneNumber,std::string darkestSecret)
	{
		this-> m_firstName = firstName;
		this-> m_lastName = lastName;
		this-> m_nickName = nickName;
		this-> m_phoneNumber = phoneNumber;
		this-> m_darkestSecret = darkestSecret;
	}


std::string    Contact::getFirstName()
{
    std::
}