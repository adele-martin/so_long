/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:53:18 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/12 14:19:54 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// int check_map(char *line)
// {
// 	size_t i;
// 	i = 0;

// 	while (line[i])
// 	{
// 		if (!(line[i] == '0') || !(line[i] == '1') || !(line[i] == 'C') || !(line[i] == 'E') || !(line[i] == 'P'))
// 		{
// 			ft_printf("Error. Map has an invalid character.");
// 		}
// 		else
// 		{
// 			i++;
// 		}
// 	}
// }

// int	read_map(t_complete *game, char **argv)
// {
// 	char	*readmap;

// 	game->fd = open(argv[1], O_RDONLY);
// 	if (game->fd < 0)
// 		return (0);
// 	while (1)
// 	{
// 		readmap = get_next_line(game->fd);
// 		if (!add_line(game, readmap))
// 			break ;
// 	}
// 	close (game->fd);
// 	game->widthmap = width_of_map(game->map[0]);
// 	return (1);
// }

