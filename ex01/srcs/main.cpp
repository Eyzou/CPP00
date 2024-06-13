/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:36:43 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 14:45:21 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

#include <string>

int main (int argc, char **argv)
{
    PhoneBook phonebook;
	std::string input;

	input = argv[1];
	
    while(1)
    {
        if(input.compare("ADD") == 0)
        {
			phonebook.addContacts();
        }
        else if(input.compare("SEARCH") == 0)
        {
			phonebook.displayContacts();
        }
		else if(input.compare("EXIT") == 0)
		{
			std::cout << "See you later!" << std::endl;
			return(EXIT_SUCCESS);
		}
    }
	return(EXIT_SUCCESS);
}
