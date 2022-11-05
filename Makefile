# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmuller <dmuller@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 16:05:07 by dmuller           #+#    #+#              #
#    Updated: 2022/11/02 16:58:38 by dmuller          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ${wildcard ft_*.c}
OBJS	= $(SRCS:.c=.o) 
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -rf

.c.o		:
	${CC} ${FLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}		: ${OBJS}
	ar rc ${NAME} ${OBJS}

all			: ${NAME}

clean		:
	${RM} ${OBJS}

fclean		: clean
	${RM} ${NAME}

re			: fclean all