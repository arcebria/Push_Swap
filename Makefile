# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arcebria <arcebria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 20:05:41 by arcebria          #+#    #+#              #
#    Updated: 2024/12/13 20:05:53 by arcebria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/main.c src/manage_input.c src/errors.c src/push.c src/rotate.c src/rrotate.c src/sort_big.c src/sort_small.c src/swap.c src/utils.c src/utils_sort_small.c
OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDE = src/push_swap.h \
		libft/libft.h libft/ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address


all: $(NAME)

$(NAME): Makefile $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c $(INCLUDE)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_DIR) clean
	@rm -f $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME)

.PHONY: all clean fclean
