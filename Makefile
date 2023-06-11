# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/06/11 11:31:12 by tobeshota        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar rcs
RM		=	rm -f
LIBFT	=	./libft/
INCS	=	ft_printf.h
SRCS	=	ft_printf.c ft_abs_address.c ft_abs_value.c ft_putlnb_fd.c \
			ft_putnbr_base.c get_args_output_len.c get_hexnum_lowercase_flag.c \
			get_hexnum_uppercase_flag.c get_int_flag.c get_nbrlen_base.c \
			get_sign.c get_space_len_in_int.c get_space_len_in_str.c \
			get_unsigned_flag.c get_zero_len.c is_conversion.c is_flag.c \
			is_min_field_width.c is_number_conversion.c is_precision.c printf_str.c \
			proc_conversion.c proc_flag.c proc_min_field_width.c \
			proc_output_conversions.c proc_precision.c put.c put_char.c \
			put_hexnum_lowercase.c put_hexnum_uppercase.c put_int.c put_percent.c \
			put_ptr.c put_sign.c put_space.c put_str.c put_unsinged.c put_zero.c \
			reassign_flags_precision.c strlen_upto_per.c
OBJS	=	$(SRCS:.c=.o)



$(NAME):	$(OBJS)
			make bonus -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		all

.c.o:		$(OBJS)
			$(CC) $(CFLAGS) -I $(INCS) -c $< -o $(<:.c=.o)

clean:
			make clean -C $(LIBFT)
			$(RM) $(OBJS) $(B_SRCS:.c=.o)

fclean:		clean
			make fclean -C $(LIBFT)
			$(RM) $(NAME)

re:			fclean all

test:		$(NAME)
			@$(CC) $(CFLAGS) -I $(INCS) test.c $(NAME) -o test
			@./test
			@$(RM) test

.PHONY:		all bonus clean fclean re test
