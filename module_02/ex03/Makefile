# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 16:06:07 by sismaili           #+#    #+#              #
#    Updated: 2022/11/22 16:06:08 by sismaili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Fixed.cpp \
	Point.cpp \
	bsp.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJS = $(SRC:.cpp=.o)

NAME = a.out

all : $(NAME)

%.o : %.cpp Fixed.hpp Point.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re