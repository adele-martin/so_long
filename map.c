/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:11 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_map_lines(t_game *game, char *map)
{
	int		map_lines;

	map_lines = 0;
	game->fd = open(map, O_RDWR);
	while (get_next_line(game->fd))
		map_lines++;
	return (map_lines);
}

char	**allocate_mem(t_game *game, int map_lines)
{

	game->map = (char **)malloc(sizeof(char *) * map_lines);
	if (!game->map)
		return (NULL);
	return (game->map);
}

void	free_map(t_game *game, int map_lines)
{
	int	i;

	i = 0;
	while (i < map_lines)
	{
		free(game->map[i]);
		i++;
	}
}

void check_rectangle(t_game *game, char *map)
{
	int		line_length;

	line_length = -1;
	char	*line;
	game->fd = open(map, O_RDWR);
	while (1)
	{
		line = get_next_line(game->fd);
		if (line == NULL)
			break;
		if (line_length == -1)
			line_length = ft_strlen(line);
		else if (ft_strlen(line) != line_length)
		{
			line = get_next_line(game->fd);
			if (ft_strlen(line) == 0)
				break;
			else
			{
				ft_printf("Error. The map does not form a rectangle.");
				break;
			}
	}
	}
	free(line);
	close(game->fd);
}

char	**read_map(t_game *game, char *map)
{
	int		i;
	char	*line;
	int		map_lines;
	int checker;

	checker = -1;

	i = 0;
	map_lines = count_map_lines(game, map);
	game->map = allocate_mem(game, map_lines);
	game->fd = open(map, O_RDWR);
	if (game->fd == -1)
	{
		ft_printf("Error! Please enter a valid map file.");
	}
	while (1)
	{
		line = get_next_line(game->fd);
		if (checker == -1)
		{
			if (line == NULL)
			{
			ft_printf("Error! Please enter a valid map file.");
			break;
			}
		}
		game->map[i++] = line;
		checker++;
	}
	close(game->fd);
	free(line);
	return (game->map);
}