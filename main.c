/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:53:10 by ademarti          #+#    #+#             */
/*   Updated: 2024/02/05 15:19:57 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		read_map(argv[1]);
	}
	else
	{
		ft_printf("Error! Please only input a map description file as parameter.");
	}

	return (0);
}