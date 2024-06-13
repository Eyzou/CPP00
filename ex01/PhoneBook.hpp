/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 11:33:45 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

# include "Contact.hpp"

class PhoneBook
{
//Methodes:

    public:

    PhoneBook(); //constructeur
    ~PhoneBook(); //destructeur

    int     getPhoneBookSize();
    void    addContacts();
    void    displayContacts();
    void    exitPhoneBook();


//Attributs  (toujours prive - encapsulation):
    private:

    Contact *p_contacts;
    int m_size
};

#endif