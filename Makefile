# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:39:42 by juthierr          #+#    #+#              #
#    Updated: 2016/11/18 18:29:01 by juthierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_isalpha.c\
	  ft_memset.c\
	  ft_putnbr.c\
	  ft_putstr.c\
	  ft_strcat.c\
	  ft_strcpy.c\
	  ft_strlcat.c\
	  ft_strlcpy.c\
	  ft_strlen.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strcpy.c\
	  ft_strstr.c\
	  
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
