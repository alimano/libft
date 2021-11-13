# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:07:42 by aaizza            #+#    #+#              #
#    Updated: 2021/11/12 03:32:48 by aaizza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_atoi.c \
ft_bzero.c   ft_isascii.c ft_memchr.c  ft_memset.c  ft_strjoin.c ft_strncmp.c ft_substr.c \
ft_calloc.c  ft_isdigit.c ft_memcmp.c  ft_split.c   ft_strlcat.c ft_strnstr.c ft_tolower.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strrchr.c ft_toupper.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstsize.c

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

HEADER = libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:		${NAME}

${NAME}:
			${CC} ${FLAGS} -c ${SRC}
			ar -rc ${NAME} ${OBJS}

bonus:
			${CC} ${FLAGS} -c ${BONUS}
			ar -rc ${NAME} ${OBJS_BONUS}

clean:
			rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean flean re