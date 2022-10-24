# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 10:50:44 by sismaili          #+#    #+#              #
#    Updated: 2022/10/24 16:08:28 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	setContact.cpp \
	getContact.cpp \
	addContact.cpp \
	searchContact.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = phonebook

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp PhoneBook.h Contact.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re