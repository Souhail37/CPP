# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 20:13:34 by sismaili          #+#    #+#              #
#    Updated: 2022/11/26 14:55:16 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

RM = rm -f

OBJS = $(SRC:.cpp=.o)

NAME = DiamondTrap

all : $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re