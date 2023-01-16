/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:58:05 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/16 10:22:39 by thbierne         ###   ########.fr       */
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
			_toInt = static_cast<long int>(strtol(_str.c_str(), NULL, 10));
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
			_toInt = static_cast<long int>(strtol(_str.c_str(), NULL, 10));
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
					return (this->_toInt);
				}
				case 2:
				{
					if ((_str.compare("-inff") == 0) || ( _str.compare("+inff") == 0) || (_str.compare("nanf") == 0))
						throw Impossible();
					int i = static_cast<int>(_toFloat);
					if (i < 0 || i > 127)
						throw Impossible();
					if (i < 32 || i > 126)
						throw NotPrintableChar();
					return (i);
				}
				case 3:
				{
					if ((_str.compare("-inf") == 0) || ( _str.compare("+inf") == 0) || (_str.compare("nan") == 0))
						throw Impossible();
					int i = static_cast<int>(_toDouble);
					if (i < 0 || i > 127)
						throw Impossible();
					if (i < 32 || i > 126)
						throw NotPrintableChar();
					return (i);
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
				{
					if (_toInt > 2147483647 || _toInt < -2147483648)
						throw Impossible();
					return (this->_toInt);
				}
				case 2:
				{
					if ((_str.compare("-inff") == 0) || ( _str.compare("+inff") == 0) || (_str.compare("nanf") == 0))
						throw Impossible();
					long int i = static_cast<long int>(_toFloat);
					if (i >= 2147483647 || i <= -2147483648)
						throw Impossible();
					return (i);
				}
				case 3:
				{
					if ((_str.compare("-inf") == 0) || ( _str.compare("+inf") == 0) || (_str.compare("nan") == 0))
						throw Impossible();
					long int i = static_cast<long int>(_toDouble);
					if (i >= 2147483647 || i <= -2147483648)
						throw Impossible();
					return (i);
				}
			}
		}
	}
	return (0);
}

float		Convert::convertFloat(std::string *type) const
{
	float f;
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return static_cast<float>(this->_toChar);
				case 1:
				{
					f = static_cast<float>(strtof(_str.c_str(), NULL));
					return static_cast<float>(f);
				}
				case 2:
				{
					f = static_cast<float>(strtof(_str.c_str(), NULL));
					return (f);
				}
				case 3:
				{
					f = static_cast<float>(strtof(_str.c_str(), NULL));
					return static_cast<float>(f);
				}
			}
		}
	}
	return (0);
}

double		Convert::convertDouble(std::string *type) const
{
	double d;

	for (int i = 0; i < 4; i++)
	{
		if (type[i] == _type)
		{
			switch (i)
			{
				case 0:
					return static_cast<double>(this->_toChar);	
				case 1:
				{
					d = static_cast<double>(strtod(_str.c_str(), NULL));
					return (d);
				}
				case 2:
				{
					d = static_cast<double>(strtod(_str.c_str(), NULL));
					return (d);
				}
				case 3:
				{
					d = static_cast<double>(strtod(_str.c_str(), NULL));
					return (d);
				}
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
	double rest;
	try
	{
		char c;
		out << "char: ";
		c = str.convertChar(type);
		out << "'" << c << "'" << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		long int i;
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
		if (modf(f, &rest) == 0)
			out.precision(1);
		out << std::fixed << f << "f" << std::endl;
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
		if (modf(d, &rest) == 0)
			out.precision(1);
		out << std::fixed << d << std::endl;
	}
	catch (const std::exception& e)
	{
		out << e.what() << std::endl;
	}
    return (out);
}