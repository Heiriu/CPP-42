# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 13:01:24 by thbierne          #+#    #+#              #
#    Updated: 2022/11/16 11:02:03 by thbierne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRCS = main.cpp				\
		Zombie.cpp			\
		zombieHorde.cpp		\

INCLUDES = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) $(INCLUDES) -o $(NAME)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Creating:\033[0m" $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Delete:\033[0m" $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Delete:\033[0m" $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS)