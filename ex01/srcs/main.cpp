/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:36:43 by marvin            #+#    #+#             */
/*   Updated: 2024/06/19 10:10:57 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/main.hpp"


int main (int argc, char **argv)
{
    PhoneBook phonebook;
	std::string input;

	if(argc > 1)
		input = argv[1];
	while(input.compare("EXIT"))
	   {
			if (!std::cin.good())
				exit (0);
	        if(input.compare("ADD") == 0)
				phonebook.addContacts();
	        else if(input.compare("SEARCH") == 0)
	        {
	        	phonebook.displayContacts();
				phonebook.searchContacts();
			}
        	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        	std::cin >> input;
	    }
	std::cout << "Ciao PhoneBook! Your contacts are gone forever! See you later!" << std::endl;
	return(EXIT_SUCCESS);
}
