/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 14:27:58 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../includes/main.hpp"
# include "../includes/Contact.hpp"

class PhoneBook
{
    public:

    PhoneBook();
    ~PhoneBook();

    void    addContacts();
    void    displayContacts();
	void   	searchContacts();
    int     validIndex(void);

    private:

    Contact m_contacts[8];
};

#endif