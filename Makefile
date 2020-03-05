# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/29 12:15:02 by jteixeir          #+#    #+#              #
#    Updated: 2020/03/04 22:42:39 by jteixeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_OBJ = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_strncmp.c ft_calloc.c ft_bzero.c ft_memset.c \
		ft_strdup.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_memccpy.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_substr.c \
		ft_strjoin.c ft_split.c ft_strtrim.c ft_itoa.c

O_OBJ = $(C_OBJ:.c=.o)

CC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(C_OBJ) -c
	ar rc $(NAME) $(O_OBJ)

clean:
	rm -rf $(O_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

