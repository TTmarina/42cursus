# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarina- <tmarina-@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 16:14:36 by tmarina-          #+#    #+#              #
#    Updated: 2023/01/31 17:17:10 by tmarina-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c \
					ft_putstr.c \
					ft_putnbr.c \
					ft_puthexa.c \
					ft_putchar.c \
					ft_choose_conversions.c \
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror #-g3 -fsanitize=address

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean
	