# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alemarti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 11:43:48 by alemarti          #+#    #+#              #
#    Updated: 2021/05/18 16:39:16 by alemarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memccpy.c \
		  ft_memmove.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

all:${NAME}
	
${NAME}:
	${CC} ${FLAGS} ${SRCS} 


test:
	@${CC} ${FLAGS} ${SRCS} main.c -o test.out
	@./test.out
	@rm test.out
