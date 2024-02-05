/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:11:04 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/05 15:26:45 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	read_map(char *map, t_game *game)
{
	int	fd;
	char	*line;

	fd = open(map, O_RDWR);
	if (fd == -1)
	{
		ft_printf("Error! Please enter a valid map file.");
		return (1);
	}
	while (1)
	{
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}