/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:32:32 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/20 11:10:27 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTTYPE_HPP
# define CONVERTTYPE_HPP
# include <string>

class	ConvertType
{

	public:

		ConvertType( std::string const & src );
		ConvertType( ConvertType const & other );
		~ConvertType( void );

		ConvertType&		operator=( ConvertType const & rhs );

		std::string const &	getSrc( void ) const;

		char				getChar( void ) const;
		int					getInt( void ) const;
		float				getFloat( void ) const;
		double				getDouble( void ) const;

		int					getConvertibleMask( void ) const;

		void				printChar( void ) const;
		void				printInt( void ) const;
		void				printFloat( void ) const;
		void				printDouble( void ) const;

		operator char();
		operator int();
		operator float();
		operator double();

	private:

		std::string const	_src;

		char				_c;
		int					_i;
		float				_f;
		double				_d;

		int					_convertibleMask;

		static int const	_charConvertible = 1;
		static int const	_intConvertible = 2;
		static int const	_floatConvertible = 4;
		static int const	_doubleConvertible = 8;

		bool				_isChar( void ) const;
		bool				_isInt( void ) const;
		bool				_isFloat( void ) const;
		bool				_isDouble( void ) const;

		void				_convertFromChar( void );
		void				_convertFromInt( void );
		void				_convertFromFloat( void );
		void				_convertFromDouble( void );

		ConvertType( void );

};

#endif
