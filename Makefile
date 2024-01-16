# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raqferre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 16:40:17 by raqferre          #+#    #+#              #
#    Updated: 2023/03/28 14:28:47 by raqferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -g
NAME	= push_swap

SRC		= main.c \
		check_input.c check_input2.c \
		moves1.c \
		moves2.c \
		moves3.c \
		sort.c \
		sort1.c \
		utils.c \
		utils2.c \
		utils3.c \
		index.c \

SRCS	= $(SRC)
OBJ		= $(SRC:.c=.o)
OBJS	= $(OBJ)

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)  
fclean: clean
	rm -f $(NAME)

re: fclean all
