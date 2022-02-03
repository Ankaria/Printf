# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elerika <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 22:01:38 by elerika           #+#    #+#              #
#    Updated: 2021/10/19 22:01:43 by elerika          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIST = 	ft_p.c 			ft_parser.c 	ft_printf.c\
		ft_putchar.c	ft_putnbr.c 	ft_putstr.c\
		ft_u.c 			ft_x_upper.c 	ft_x.c\

HEADER	=	ft_printf.h

OBJ = $(patsubst %.c, %.o, $(LIST))

FLAGS = -Wall -Werror -Wextra -I${HEADER}

all: $(NAME)

$(NAME): 	$(OBJ) ${HEADER}
			ar rcs $(NAME) $?

%.o : %.c 	${HEADER}
			gcc $(FLAGS) -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re