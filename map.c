/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/15 14:11:10 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char **allocate_mem(t_game *game, char *map)
{
	char **new_map;
	int map_lines;

	map_lines = 0;
	game->fd = open(map, O_RDWR);
	while (get_next_line(game->fd))
		map_lines++;
	new_map = (char **)malloc(sizeof(char *) * map_lines);
	if (!new_map)
		return NULL;
	return (new_map);
}

char **read_map(t_game *game, char *map)
{
	int i;
	char **new_map;
	char *line;

	i = 0;
	new_map = allocate_mem(game, map);
	game->fd = open(map, O_RDWR);
	if (game->fd == -1)
	{
		ft_printf("Error! Please enter a valid map file.");
	}
	while ((line = get_next_line(game->fd)) != NULL)
	{
		new_map[i++] = line;
	}
	ft_printf("%s", new_map[0]);
	ft_printf("%s", new_map[1]);
	ft_printf("%s", new_map[2]);
	ft_printf("%s", new_map[3]);
	ft_printf("%s", new_map[4]);
	ft_printf("%s", new_map[5]);
	ft_printf("%s", new_map[6]);
	close(game->fd);
	return (new_map);
}