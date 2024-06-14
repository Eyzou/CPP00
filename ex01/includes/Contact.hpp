/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:14:18 by marvin            #+#    #+#             */
/*   Updated: 2024/06/13 14:39:52 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// variable d'une classe est un attribut
// fonction d'une classe est une methode - actions faites par Contact

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "../includes/main.hpp"

# include <string>
# include <functional>

class Contact
{
    public:

    Contact();
    ~Contact();
    std::string getInputs(std::string question, std::function<bool(char)> validator, int len = 0);
	void setInfos();
    void setIndex(int index);
    void view(int index);
    void display(int index);
	std::string print(std::string str);

    private:

    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickName;
    std::string m_phoneNumber;
    std::string m_darkestSecret;
    int         m_index;

};

#endif