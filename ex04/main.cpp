/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:10:06 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/18 00:41:58 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int ft_Error(const std::string ErrorMsg)
{
    std::cerr << ErrorMsg << std::endl;
    return (1);
}

std::string ReplaceStr (std::string content, const std::string s1, const std::string s2)
{
    size_t index = 0;
    if(s1.empty() || s1 == s2) // if there is no text to replace just return original value
        return content;
    while ((index = content.find(s1, index)) != std::string::npos)
    {
        content.erase(index, s1.length());
        content.insert(index, s2);
        index++;
    }
    return (content);
}

int main(int ac, char *av[])
{
    if(ac != 4)
        return (ft_Error("Usage : ./app <filename> <s1> <s2>"));

    // open source file and check for errors -----------------------------------------
    std::string     filename = av[1];
    std::ifstream   InputFile(av[1]); 
    if(!InputFile.is_open())
        return (ft_Error("Cannot read from this file"));
    
    // create output file and check for errors -----------------------------------------
    std::ofstream OutFile((filename + ".replace").c_str());
    if(!OutFile.is_open())
        return InputFile.close(), ft_Error("Cannot write to this file ");
    
    std::string line; // readed line
    std::string content; // stored lines

    // reading the file cocntent line by line -----------------------------------------
    while (std::getline(InputFile, line)){
        content = content + line;
        if(InputFile.peek() != EOF)
            content += "\n";
    }
    //replacing the content -----------------------------------------
    OutFile << ReplaceStr(content, av[2], av[3]);

    //closing the files -----------------------------------------
    OutFile.close();
    InputFile.close();
    return 0;
}
