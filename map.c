/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/16 15:45:18 by ademarti         ###   ########.fr       */
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

char	**read_map(t_game *game, char *map)
{
	int		i;
	char	*line;
	int map_lines;

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
		if (line == NULL)
			break ;
		game->map[i++] = line;
	}
	close(game->fd);
	return (game->map);
}
