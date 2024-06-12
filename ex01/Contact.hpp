/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:14:18 by marvin            #+#    #+#             */
/*   Updated: 2024/06/12 14:14:18 by marvin           ###   ########.fr       */
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
    std::string getFirstName(std::string str);
    std::string getLastName(std::string str);
    std::string getNickName(std::string str);
    std::string getPhoneNumber(std::string str);
    std::string getDarkestSecret(std::string str);

// recevoir chaques infos

//Attributs  (toujours prive - encapsulation):
    private:

    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_phoneNumber;
    std::string m_darkestSecret;

};

#endif