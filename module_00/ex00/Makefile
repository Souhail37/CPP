# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:28:37 by sismaili          #+#    #+#              #
#    Updated: 2022/10/21 11:50:25 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = megaphone

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re