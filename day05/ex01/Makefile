# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 10:28:19 by thbierne          #+#    #+#              #
#    Updated: 2022/12/21 15:03:18 by thbierne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRCS = srcs/main.cpp			\
		srcs/Bureaucrat.cpp		\
		srcs/Form.cpp			\

OBJS = $(SRCS:.cpp=.o)			\

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $(OBJS)
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