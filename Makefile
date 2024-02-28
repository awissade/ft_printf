# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awissade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 16:59:22 by awissade          #+#    #+#              #
#    Updated: 2023/12/03 22:35:26 by awissade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SOURCES		=	ft_printf.c ft_putcapitalhex.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putsign.c ft_putstr.c ft_putunsigned.c

OBJECTS		=	$(SOURCES:.c=.o)

CC			=	cc
CFLAGS		=	-Wextra -Wall -Werror

all		:	$(NAME)

$(NAME)		:	$(OBJECTS)
		ar rcs $@ $^

%.o		:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean		:
	rm -rf $(OBJECTS)

fclean		:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
