# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 19:02:57 by sismaili          #+#    #+#              #
#    Updated: 2022/11/25 19:23:48 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJS = $(SRC:.cpp=.o)

NAME = FragTrap

all : $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re