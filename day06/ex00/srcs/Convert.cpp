/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:58:05 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/10 15:58:40 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Convert.hpp"


/*			constructor			*/

Convert::Convert()
{
	std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
}


/*			constructor and find type*/

Convert::Convert(std::string str) : _str(str)
{
	size_t i;
	char *rest;

	//std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
	if (_str.empty())
		throw EmptyArg();
	if (_str.size() == 1)
	{
		if ((_str[0] >= 32 && _str[0] <= 47) || (_str[0] >= 58 && _str[0] <= 126))
		{
			_toChar = _str[0];
			_type = "char";
		}
		else if (_str[0] < 30 || _str[0] > 39)
		{
			_toInt = static_cast<int>(strtol(_str.c_str(), NULL, 10));
			_type = "int";
		}
	}
	else
	{
		i = 0;
		if (_str[i] == '-')
			i++;
		while (_str[i] && _str[i] >= '0' &&_str[i] <= '9')
			i++;
		if (!_str[i])
		{
			_toInt = static_cast<int>(strtol(_str.c_str(), NULL, 10));
			_type = "int";
		}
		else if ((_str.compare("-inf") == 0) || ( _str.compare("+inf") == 0) || (_str.compare("nan") == 0))
		{
			_toDouble = static_cast<double>(strtod(_str.c_str(), &rest));
			_type = "double";
		}
		else if ((_str.compare("-inff") == 0) || ( _str.compare("+inff") == 0) || (_str.compare("nanf") == 0))
		{
			_toFloat = static_cast<float>(strtof(_str.c_str(), &rest));
			_type = "float";
		}
		else
		{
			i = _str.size();
			i--;
			if (_str[i] == 'f')
			{
				i--;
				while (i != 1 && (_str[i] >= '0' && _str[i] <= '9'))
					i--;
				if (_str[i] == '.')
				{
					_toFloat = static_cast<float>(strtof(_str.c_str(), &rest));
					_type = "float";	
				}
				else
					throw InvalidInput();
			}
			else if (_str[i] >= '0' && _str[i] <= '9')
			{
				while (i != 1 && (_str[i] >= '0' && _str[i] <= '9'))
					i--;
				if (_str[i] == '.')
				{
					_toDouble = static_cast<double>(strtod(_str.c_str(), &rest));
					_type = "double";
				}
			}
			else
				throw InvalidInput();
		}
	}
}


/*			destructor			*/

Convert::~Convert()
{
	//std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}



/*			copy and assignment*/

Convert::Convert(const Convert &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_str = p._str;
}


void Convert::operator=(const Convert &p)
{
	std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_str = p._str;
}

char	Convert::convertChar(std::string *type) const
{
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return (_toChar);
				case 1:
				{
					if (_toInt < 0 || _toInt > 127)
						throw Impossible();
					if (_toInt < 32 || _toInt > 126)
						throw NotPrintableChar();
					return (_toInt);
				}
				case 2:
				{
					if ((_str.compare("-inf") == 0) || ( _str.compare("+inf") == 0) || (_str.compare("nan") == 0))
						throw Impossible();
				}
				case 3:
				{

				}
			}
		}
	}
	return ('\0');
}

int		Convert::convertInt(std::string *type) const
{
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return static_cast<char>(this->_toChar);
				case 1:
					return (_toInt);
				case 2:
				{

				}
				case 3:
				{

				}
			}
		}
	}
	return (0);
}

float		Convert::convertFloat(std::string *type) const
{
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return static_cast<float>(this->_toChar);
				case 1:
					return static_cast<float>(this->_toInt);
				case 2:
					return (this->_toFloat);
				case 3:
					return static_cast<float>(this->_toDouble);
			}
		}
	}
	return (0);
}

double		Convert::convertDouble(std::string *type) const
{
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return static_cast<double>(this->_toChar);	
				case 1:
					return static_cast<double>(this->_toInt);
				case 2:
					return static_cast<double>(this->_toFloat);
				case 3:
					return (this->_toDouble);
			}
		}
	}
	return (0);
}


/*			handle exception			*/

const char* Convert::EmptyArg::what() const throw()
{
	return ("Empty arg");
}

const char* Convert::NotPrintableChar::what() const throw()
{
	return ("non displayable");
}

const char* Convert::InvalidInput::what() const throw()
{
	return ("Invalid argument");
}

const char* Convert::Impossible::what() const throw()
{
	return ("Impossible");
}


/*			display			*/

std::ostream &operator<<(std::ostream &out, const Convert &str)
{
	std::string type[4] = { "char", "int", "float", "double"};
	try
	{
		char c;
		out << "char: ";
		c = str.convertChar(type);
		out << c << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		int i;
		out << "int: ";
		i = str.convertInt(type);
		out << i << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		float f;
		out << "float: ";
		f = str.convertFloat(type);
		out << f << "f" << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		double d;
		out << "double: ";
		d = str.convertDouble(type);
		out << d << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
    return (out);
}