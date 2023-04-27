/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:18:47 by thbierne          #+#    #+#             */
/*   Updated: 2023/04/27 16:36:38 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"


//			constructor			//

PmergeMe::PmergeMe()
{
	std::cout << "\033[0;32mDefault constructor created\033[0m" << std::endl;
}

PmergeMe::PmergeMe(char *str) : _str(str)
{
	std::cout << "\033[0;32mDefault constructor created\033[0m" << std::endl;
}



//			destructor			//

PmergeMe::~PmergeMe()
{
	std::cout << "\033[0;31mDefault destructor created\033[0m" << std::endl;
}



//			copy and assigment			//

PmergeMe::PmergeMe(const PmergeMe &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	(void)p;
}

void PmergeMe::operator=(const PmergeMe &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	(void)p;
}


//			fonction			//


//			get number			//

void	PmergeMe::get_number()
{
	int i;
	int y;
	const char *str;

	i = 0;
	y = 1;
	str = _str.c_str();
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		_deque.push_back(atoi(&str[i]));
		_vector.push_back(atoi(&str[i]));
		y++;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//			Deque Part			//

void PmergeMe::swap_var(int i, int mode)
{
	int tmp;

	if (mode == 0)
	{
		tmp = _beginDeque[i];
		_beginDeque[i] = _beginDeque[i + 1];
		_beginDeque[i + 1] = tmp;
	}
	else if (mode == 1)
	{
		tmp = _endDeque[i];
		_endDeque[i] = _endDeque[i + 1];
		_endDeque[i + 1] = tmp;
	}
	else
	{
		tmp = _deque[i];
		_deque[i] = _deque[i + 1];
		_deque[i + 1] = tmp;
	}
}

int	PmergeMe::check_if_sort(int mode)
{
	unsigned long i;

	i = 0;
	if (mode == 0)
	{
		while (i < _beginDeque.size() - 1)
		{
			if (_beginDeque[i] > _beginDeque[i + 1])
				return (1);
			i++;
		}
	}
	else
	{
		while (i < _endDeque.size() - 1)
		{
			if (_endDeque[i] > _endDeque[i + 1])
				return (1);
			i++;
		}
	}
	return (0);
}

void PmergeMe::sort_begin_deque()
{
	unsigned long i;
	unsigned long y;
	int z;
	int tmp;

	y = 2;
	while (y <= _beginDeque.size())
	{
		i = 0;
		while (i < _beginDeque.size() - 1)
		{
			tmp = i;
			z = 1;
			while ((unsigned long)z < y)
			{
				if (_beginDeque[i] > _beginDeque[i + 1])
				{
					swap_var(i, 0);
					i = tmp;
					z = 1;
				}
				else
				{
					i++;
					z++;
				}
			}
			i++;
		}
		y = y * 2;
	}
	if (check_if_sort(0) == 1)
	{
		int i;

		i = 0;
		while ((unsigned long)i < _beginDeque.size() - 1)
		{
			if (_beginDeque[i] > _beginDeque[i + 1])
			{
				swap_var(i, 0);
				i = -1;
			}
			i++;
		}
	}
}

void PmergeMe::sort_end_deque()
{
	unsigned long i;
	unsigned long y;
	int z;
	int tmp;

	y = 2;
	while (y <= _endDeque.size())
	{
		i = 0;
		while (i < _endDeque.size() - 1)
		{
			tmp = i;
			z = 1;
			while ((unsigned long)z < y)
			{
				if (_endDeque[i] > _endDeque[i + 1])
				{
					swap_var(i, 1);
					i = tmp;
					z = 1;
				}
				else
				{
					i++;
					z++;
				}
			}
			i++;
		}
		y = y * 2;
	}
	if (check_if_sort(1) == 1)
	{
		int i;

		i = 0;
		while ((unsigned long)i < _endDeque.size() - 1)
		{
			if (_endDeque[i] > _endDeque[i + 1])
			{
				swap_var(i, 1);
				i = -1;
			}
			i++;
		}
	}
}

void PmergeMe::alloc_deque()
{
	_deque.assign(_beginDeque.begin(), _beginDeque.end());
	_deque.insert( _deque.end(), _endDeque.begin(), _endDeque.end());
	int i;

	i = 0;
	while ((unsigned long)i < _deque.size() - 1)
	{
		if (_deque[i] > _deque[i + 1])
		{
			swap_var(i, 2);
			i = -1;
		}
		i++;
	}
}

void PmergeMe::sort_number_deque()
{
	int i;
	int y;

	i = _deque.size();
	if (i % 2 != 0)
		i = ((i / 2) + 1);
	else
		i /= 2;
	y = 0;
	while (y < i)
	{
		_beginDeque.push_back(_deque[y]);
		y++;
	}
	while (_deque[y])
	{
		_endDeque.push_back(_deque[y]);
		y++;
	}
	print_iterator(0);
	_deque.clear();
	_time = std::clock();
	sort_begin_deque();
	sort_end_deque();
	alloc_deque();
	_timeDeque = std::clock();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//					Vector					//

void PmergeMe::swap_var_vector(int i, int mode)
{
	int tmp;

	if (mode == 0)
	{
		tmp = _beginVector[i];
		_beginVector[i] = _beginVector[i + 1];
		_beginVector[i + 1] = tmp;
	}
	else if (mode == 1)
	{
		tmp = _endVector[i];
		_endVector[i] = _endVector[i + 1];
		_endVector[i + 1] = tmp;
	}
	else
	{
		tmp = _vector[i];
		_vector[i] = _vector[i + 1];
		_vector[i + 1] = tmp;
	}
}

int	PmergeMe::check_if_sort_vector(int mode)
{
	unsigned long i;

	i = 0;
	if (mode == 0)
	{
		while (i < _beginVector.size() - 1)
		{
			if (_beginVector[i] > _beginVector[i + 1])
				return (1);
			i++;
		}
	}
	else
	{
		while (i < _endVector.size() - 1)
		{
			if (_endVector[i] > _endVector[i + 1])
				return (1);
			i++;
		}
	}
	return (0);
}

void PmergeMe::sort_begin_vector()
{
	unsigned long i;
	unsigned long y;
	int z;
	int tmp;

	y = 2;
	while (y <= _beginVector.size())
	{
		i = 0;
		while (i < _beginVector.size() - 1)
		{
			tmp = i;
			z = 1;
			while ((unsigned long)z < y)
			{
				if (_beginVector[i] > _beginVector[i + 1])
				{
					swap_var_vector(i, 0);
					i = tmp;
					z = 1;
				}
				else
				{
					i++;
					z++;
				}
			}
			i++;
		}
		y = y * 2;
	}
	if (check_if_sort_vector(0) == 1)
	{
		int i;

		i = 0;
		while ((unsigned long)i < _beginVector.size() - 1)
		{
			if (_beginVector[i] > _beginVector[i + 1])
			{
				swap_var_vector(i, 0);
				i = -1;
			}
			i++;
		}
	}
}

void PmergeMe::sort_end_vector()
{
	unsigned long i;
	unsigned long y;
	int z;
	int tmp;

	y = 2;
	while (y <= _endVector.size())
	{
		i = 0;
		while (i < _endVector.size() - 1)
		{
			tmp = i;
			z = 1;
			while ((unsigned long)z < y)
			{
				if (_endVector[i] > _endVector[i + 1])
				{
					swap_var_vector(i, 1);
					i = tmp;
					z = 1;
				}
				else
				{
					i++;
					z++;
				}
			}
			i++;
		}
		y = y * 2;
	}
	if (check_if_sort_vector(1) == 1)
	{
		int i;

		i = 0;
		while ((unsigned long)i < _endVector.size() - 1)
		{
			if (_endVector[i] > _endVector[i + 1])
			{
				swap_var_vector(i, 1);
				i = -1;
			}
			i++;
		}
	}
}

void PmergeMe::alloc_vector()
{
	_vector.assign(_beginVector.begin(), _beginVector.end());
	_vector.insert( _vector.end(), _endVector.begin(), _endVector.end());
	int i;

	i = 0;
	while ((unsigned long)i < _vector.size() - 1)
	{
		if (_vector[i] > _vector[i + 1])
		{
			swap_var_vector(i, 2);
			i = -1;
		}
		i++;
	}
}

void PmergeMe::sort_number_vector()
{
	int i;
	int y;

	i = _vector.size();
	if (i % 2 != 0)
		i = ((i / 2) + 1);
	else
		i /= 2;
	y = 0;
	while (y < i)
	{
		_beginVector.push_back(_vector[y]);
		y++;
	}
	while ((unsigned long)y < _vector.size())
	{
		_endVector.push_back(_vector[y]);
		y++;
	}
	print_iterator_vector(0);
	_vector.clear();
	_time = std::clock();
	sort_begin_vector();
	sort_end_vector();
	alloc_vector();
	_timeVector = std::clock();
}


/////////////////////////////////////////////////////////////////////////////////////////////////

void PmergeMe::print_iterator(int mode)
{
	std::deque<int>::iterator it = _deque.begin();
	if (mode == 0)
	{
		std::cout << "before: ";
		while (it != _deque.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "after: ";
		while (it != _deque.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
	}
}

void PmergeMe::print_iterator_vector(int mode)
{
	std::vector<int>::iterator it = _vector.begin();
	if (mode == 0)
	{
		std::cout << "before: ";
		while (it != _vector.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "after: ";
		while (it != _vector.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
	}
}

void PmergeMe::display_time(int mode)
{
	double i = ((_timeDeque - _time));
	if (mode == 0)
		std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : ";
	else
	{
		i = ((_timeVector - _time));
		std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : ";
	}
	std::cout << i / 1000 << " seconds" << std::endl;
}

void PmergeMe::init()
{
	get_number();
	sort_number_deque();
	print_iterator(1);
	display_time(0);
	sort_number_vector();
	print_iterator_vector(1);
	display_time(1);
}