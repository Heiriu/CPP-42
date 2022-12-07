# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 10:28:19 by thbierne          #+#    #+#              #
#    Updated: 2022/12/06 16:04:22 by thbierne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalBrain

SRCS = srcs/main.cpp			\
		srcs/Animal.cpp			\
		srcs/Dog.cpp			\
		srcs/Cat.cpp			\
		srcs/WrongAnimal.cpp	\
		srcs/WrongCat.cpp		\
		srcs/Brain.cpp			\

OBJS = $(SRCS:.cpp=.o)			\

CC = c++

CFLAGS = -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $<
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
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