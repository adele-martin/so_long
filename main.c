/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:53:10 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/15 14:52:29 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_game	game;
	char	**new_map;
	int		map_lines;

	new_map = NULL;
	map_lines = count_map_lines(&game, argv[1]);
	if (argc == 2)
	{
		new_map = read_map(&game, argv[1]);
	}
	else
		ft_printf("Error! Please only input a map description file as parameter.");
	free_map(new_map, map_lines);
	return (0);
}