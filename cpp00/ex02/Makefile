# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 18:57:22 by kzak              #+#    #+#              #
#    Updated: 2023/02/07 19:22:51 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS	= Account.cpp tests.cpp
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
