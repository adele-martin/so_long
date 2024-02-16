/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:19:03 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/16 14:20:50 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

// #define WINDOW_WIDTH 600
// #define WINDOW_HEIGHT 300

// #define MLX_ERROR 1

// #define RED_PIXEL 0xFF0000
// #define GREEN_PIXEL 0xFF00
// #define WHITE_PIXEL 0xFFFFFF

# include "./mlx/mlx.h"
# include "./get_next_line/get_next_line.h"
# include "./ft_printf/ft_printf.h"

# define FILE_MSG "Error\nIncorrect number of parameters, only 2 are accepted.\n"
# define FILE_EXT_MSG "Error\nFile has invalid file extension\n"
# define EMPTY_MSG "Error\nMap is empty\n"
# define RECT_MSG "Error\nMap is not rectangle.\n"
# define WRONG_MSG "Error\nMap have the wrongs components\n"
# define WALL_MSG "Error\nMap don't have close walls\n"
# define MIN_TILES_MSG "Error\nYou don't have the correct components\n"
# define PATH_MSG "Error\nThere is not a valid path\n"

typedef struct s_game
{
	int fd;
	char **map;
	// int exit_count;
	// int collectables_count;
	// int starting_position_count;
} t_game;

char	**read_map(t_game *game, char *map);
int	count_map_lines(t_game *game, char *map);
void	free_map(t_game *game, int map_lines);

#endif