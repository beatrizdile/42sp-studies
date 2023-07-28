# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 13:22:49 by bedos-sa          #+#    #+#              #
#    Updated: 2023/07/13 13:23:38 by bedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = strings
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I./include
XFLAGS =  -lmlx -lXext -lX11
LIBFT = ./libft
RM = rm -f
FILES = strings.c
OBJS = $(FILES:.c=.o)

all: $(NAME)
	@echo "SUCCESS!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	@$(CC) $(OBJS) $(CFLAGS) $(LIBFT)/libft.a -o $(NAME) $(XFLAGS)

bonus: all

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus