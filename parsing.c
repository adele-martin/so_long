/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:53:18 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/16 15:23:31 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int check_chars(t_game *game)
{
	size_t i;

	i = 0;
	while (game->map[i])
	{
		if (!(game->map[i] == '0') || !(game->map[i] == '1') || !(game->map[i] == 'C') || !(game->map[i] == 'E') || !(game->map[i] == 'P'))
		{
			ft_printf("Error. Map has an invalid character.");
		}
		else
			i++;
	}
	return 0;
}

// int check_rectangle()
// {
// 	count_map_lines(&game, map);
// }
