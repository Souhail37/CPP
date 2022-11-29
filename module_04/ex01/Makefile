# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 16:51:00 by sismaili          #+#    #+#              #
#    Updated: 2022/11/28 18:57:52 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp

HEADERS = Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		Brain.hpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

OBJS = $(SRC:.cpp=.o)

NAME = Animal

all : $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re