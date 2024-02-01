# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 16:48:33 by ademarti          #+#    #+#              #
#    Updated: 2024/02/01 15:36:47 by ademarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME			= so_long.a

# SRCS = game.c

# INCLUDES = -I/usr/include -Imlx
# .c.o:
# 	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)
# OBJS = $(SRCS:.c=.o)
# MLX_LIB = mlx/
# MLX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11

# CC				= gcc
# RM				= rm -f
# CFLAGS			= -Wall -Wextra -Werror -I.

# all:			$(NAME)

# $(NAME): $(OBJS)
# 	@if [ ! -d "mlx" ]; then \
# 	git clone https://github.com/42Paris/minilibx-linux.git mlx; \
# 	fi
# 	@make -C $(MLX_LIB)
# 	$(CC) $(CFLAGS) $(OBJS) $(GETNEXTLINE) $(MLX_FLAGS) -o $(NAME)

# clean:
# 				$(RM) $(OBJS)

# fclean:			clean
# 				$(RM) $(NAME)

# re:				fclean $(NAME)

# .PHONY:			all clean fclean re bonus

NAME		= so_long.a

SRCS		= game.c

INCLUDES	= -I/usr/include -Imlx

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

OBJS		= $(SRCS:.c=.o)

MLX_LIB		= mlx/
MLX_FLAGS	= -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I.

all:		$(NAME)

$(NAME): $(OBJS)
	@if [ ! -d "mlx" ]; then \
		git clone https://github.com/42Paris/minilibx-linux.git mlx; \
	fi
	@make -C $(MLX_LIB)

	$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re
