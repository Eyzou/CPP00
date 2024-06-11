/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:19:20 by marvin            #+#    #+#             */
/*   Updated: 2024/06/11 20:19:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if(argc == 1)
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int j = 1; j < argc ; j++)
        {
            std::string str = std::string(argv[j]);
            for(size_t i = 0; i < str.size() ; i++)
                 std::cout << (char)std::toupper(str[i]);
        }
    }
    std::cout << std::endl;
    return (0);
}
