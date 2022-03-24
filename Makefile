# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogranger <ogranger@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 11:36:47 by ogranger          #+#    #+#              #
#    Updated: 2021/10/26 12:49:58 by ogranger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# make have to not re-compile when libft.h is changed ?

LIST =		ft_atoi.c		ft_itoa.c		ft_isalnum.c\
			ft_isalpha.c	ft_isascii.c	ft_isdigit.c\
			ft_isprint.c	ft_strchr.c		ft_strrchr.c\
			ft_tolower.c	ft_toupper.c	ft_atoi.c\
			ft_itoa.c		ft_striteri.c	ft_strmapi.c\
			ft_bzero.c		ft_calloc.c		ft_memchr.c\
			ft_memcmp.c		ft_memcpy.c		ft_memmove.c\
			ft_memset.c		ft_putnbr_fd.c	ft_putchar_fd.c\
			ft_putendl_fd.c	ft_putstr_fd.c	ft_split.c\
			ft_strdup.c		ft_strjoin.c	ft_strlcat.c\
			ft_strlcpy.c	ft_strlen.c		ft_strncmp.c\
			ft_strnstr.c	ft_strtrim.c	ft_substr.c

OBJ = $(patsubst %.c,%.o,$(LIST))

D_FILES = $(patsubst %.c,%.d,$(LIST) $(LIST_B))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	clang $(FLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean :
	@rm -f $(OBJ) $(D_FILES)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus