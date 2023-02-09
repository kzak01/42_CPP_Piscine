# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 18:52:47 by kzak              #+#    #+#              #
#    Updated: 2023/02/09 10:53:03 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Phonebook
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS	= src/main.cpp src/PhoneBook.cpp src/Contact.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
