/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:00:42 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/15 13:04:17 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <fstream>
# include <string>

int		main( int argc, char** argv );
bool	getFilestream( std::ifstream& ifs, std::ofstream& ofs, char* filename );
void	replaceStrings( std::ifstream& ifs, std::ofstream& ofs, std::string& oldString, std::string& newString );
bool	errorArgument( void );
bool	errorFilestream( void );

#endif