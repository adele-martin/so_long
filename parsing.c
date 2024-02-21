/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:53:18 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/21 13:46:47 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int check_chars(t_game *game)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (game->map[i])
	{
		j = 0;
		// ft_printf("%s", game->map[i]);
		ft_printf("%c", game->map[i][j]);
		while (game->map[i][j])
		{
		if (game->map[i][j] != '0' || game->map[i][j] != '1' || game->map[i][j] != 'C' || game->map[i][j] != 'E' || game->map[i][j] != 'P')
		{
			ft_printf("Error. Map has an invalid character.");
			return (-1);
		}
			j++;
		}
		i++;
	}
	return 0;
}

// int check_rectangle()
// {
// 	count_map_lines(&game, map);
// }
