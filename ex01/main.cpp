/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:36:43 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 11:31:59 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <string>

int main (void)
{
    PhoneBook phonebook;
	std::string input;
	
    while(input.compare("EXIT"))
    {
        if(input.compare("ADD") == 0)
        {
			phonebook.addContacts();
        }
        if(input.compare("SEARCH") == 0)
        {
			phonebook.displayContacts();
        }
    }
	std::cout << "See you later!" << std::endl;
	return(EXIT_SUCCESS);
}
