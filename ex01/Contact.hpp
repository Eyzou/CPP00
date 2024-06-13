/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:14:18 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 10:23:16 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// variable d'une classe est un attribut
// fonction d'une classe est une methode - actions faites par Contact

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    public:

//Methodes:
    Contact(); //constructeur
    ~Contact(); //destructeur
	void setInfos(std::string firstName,std::string lastName,std::string nickName,std::string phoneNumber,std::string darkestSecret);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();

// recevoir chaques infos

//Attributs  (toujours prive (private with m_(non static member variable)) - encapsulation):
    private:

    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_phoneNumber;
    std::string m_darkestSecret;

};

#endif