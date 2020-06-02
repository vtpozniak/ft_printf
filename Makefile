#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpozniak <vpozniak@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 16:05:19 by vpozniak          #+#    #+#              #
#    Updated: 2019/04/05 16:05:28 by vpozniak         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libftprintf.a
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
HEADER      =   ft_printf.h
FILES		=	ft_printf.c\
parsing.c\
pro_c.c\
pro_s.c\
pro_d_i.c\
ft_itoa.c\
ft_check_type.c\
funckd_i.c\
pars_func.c\
pro_o_u_x.c\
pro_o_u_x.c\
pro_prots.c\
pro_p.c\
pro_f.c\
prof_f.c\
funck_f.c\
ft_itoa_base_p.c\
libfan1.c\
libfun2.c

OBJS		= 	$(FILES:.c=.o)
	
all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

clean: all
		@rm -rf $(OBJS)

fclean:
		@rm -rf $(OBJS) $(NAME)

re: fclean all