# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/29 12:15:02 by jteixeir          #+#    #+#              #
#    Updated: 2020/02/29 12:15:11 by jteixeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_OBJ = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_strncmp.c ft_calloc.c ft_bzero.c ft_memset.c \
		ft_strdup.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_memccpy.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_substr.c \
		ft_strjoin.c ft_split.c

O_OBJ = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		ft_tolower.o ft_toupper.o ft_strlen.o ft_strchr.o ft_strrchr.o \
		ft_strnstr.o ft_strncmp.o ft_calloc.o ft_bzero.o ft_memset.o \
		ft_strdup.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o \
		ft_memccpy.o ft_atoi.o ft_strlcpy.o ft_strlcat.o ft_substr.o \
		ft_strjoin.o ft_split.o

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

