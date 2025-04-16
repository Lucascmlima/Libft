# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 20:38:35 by lcarvalh          #+#    #+#              #
#    Updated: 2025/04/15 16:35:09 by lcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_calloc.c \
	ft_split.c \
	ft_atoi.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
