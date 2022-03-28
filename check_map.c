/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:10:09 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/12 18:10:11 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

void	ft_coll_ex(t_map map)
{
	if (map.ex != true)
	{
		write(2,
			"Error :\nThere is no exite, the map need at least one exit\n", 58);
		exit (1);
	}
	if (map.collectible == 0)
	{
		write(2, "Error :\n", 8);
		write(2, "There is no collectible, ", 25);
		write(2, "the map need at least one collectible\n", 38);
		exit(1);
	}
}

void	ft_check(char **tab, t_map *t)
{
	ft_check_lines_of_map(tab);
	ft_check_for_outsiders(tab);
	ft_check_borders(tab);
	ft_check_player(tab, t);
	ft_coll_ex(*t);
}

void	write_err_lent(char **tab, int i)
{
	if (i == 1)
	{
		write (2, "Error :\n", 8);
		write (2, "Lent error\n", 11);
		free_map (tab);
		exit (1);
	}
	if (i == 2)
	{
		write (2, "Error :\n", 8);
		write (2, "Borders-Error\n", 14);
		free_map(tab);
		exit(1);
	}
	if (i == 3)
	{
		write (2, "Error :\n", 8);
		write(2, "The map need one player and one player only\n", 44);
		free_map(tab);
		exit(1);
	}
}
