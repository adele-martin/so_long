# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 16:48:33 by ademarti          #+#    #+#              #
#    Updated: 2024/02/12 16:16:59 by ademarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CFLAGS = -g -Wextra -Wall -Werror
SRC = main.c map.c
GETNEXTLINE := get_next_line/*c
FT_PRINTF := ft_printf/*c
OBJS = $(SRC:.c=.o)
MLX_LIB = mlx/
MLX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11
all: $(NAME)
$(NAME): $(OBJS)
	@if [ ! -d "mlx" ]; then \
	git clone https://github.com/42Paris/minilibx-linux.git mlx; \
	fi
	@make -C $(MLX_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(GETNEXTLINE) $(LIBFT) $(FT_PRINTF) $(MLX_FLAGS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	@if [ -d "mlx" ]; then \
	make clean -C mlx/; \
	fi
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
