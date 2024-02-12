/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/12 18:17:52 by ademarti         ###   ########.fr       */
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
	ft_printf("%d", map_lines);
	return (new_map);
}

char **read_map(t_game *game, char *map)
{
	int i;

	i = 0;
	char **new_map;
	new_map = allocate_mem(game, map);
	game->fd = open(map, O_RDWR);
	if (game->fd == -1)
	{
		ft_printf("Error! Please enter a valid map file.");
	}
	// new_map[i] = get_next_line(game->fd);
	//What is actually being printed in my new_line variable?
	while (new_map[i])
		new_map[i++] = get_next_line(game->fd);
	ft_printf("%s", new_map);
	close(game->fd);
	return (new_map);
}