/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/12 17:08:16 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int count_rows(t_game *map)
{
	int map_lines;
	int i;

	i = 0;
	map_lines = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			map_lines++;
		else
			i++;
	}
	ft_printf("%s", map);
	i = 0;
	return (map_lines);
}

int	read_map(t_game *game, char *map)
{
	int		i;
	char **new_map;
	int map_lines;

	i = 0;
	game->fd = open(map, O_RDWR);
	if (game->fd == -1)
	{
		ft_printf("Error! Please enter a valid map file.");
		return (1);
	}
	map_lines = count_rows(game->fd);
	new_map = (char **)malloc(sizeof(char) * map_lines + 1 );
	new_map[i] = get_next_line(game->fd);
	while (new_map[i])
		new_map[i++] = get_next_line(game->fd);
	ft_printf("%d", i);
	close(game->fd);
	return (0);
}