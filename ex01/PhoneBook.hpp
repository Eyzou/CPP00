/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/06/12 14:26:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class PhoneBook
{
//Methodes:

    public:

    PhoneBook(); //constructeur
    ~PhoneBook(); //destructeur

    int     getPhoneBookSize();
    void    addContacts();
    void    searchContacts(int index);
    void    exitPhoneBook();


//Attributs  (toujours prive - encapsulation):
    private:

    Contact *m_contacts;
    int m_size
};

#endif