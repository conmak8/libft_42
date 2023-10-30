# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 22:12:47 by cmakario          #+#    #+#              #
#    Updated: 2023/10/30 15:30:51 by cmakario         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c  \
			ft_substr.c	\
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c
			

OBJ_FILES = $(FUNCTIONS:%.c=%.o)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES) : $(FUNCTIONS)
	$(CC) $(CFLAGS) -c $(FUNCTIONS)

all: $(NAME)

clean: 
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re