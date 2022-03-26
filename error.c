/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:43:38 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:43:39 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

void	ft_check_lines_of_map(char **tab)
{
	int		i;
	size_t	size;

	if (tab[0] == NULL)
	{
		write(2, "Error :\n", 8);
		write(2, "Empty Map\n", 10);
		exit (1);
	}
	i = 1;
	size = ft_strlen_map(tab[0]);
	while (tab[i])
	{
		if (size != ft_strlen_map(tab[i]))
			write_err_lent(tab, 1);
		i++;
	}
	if (ft_strlen(tab[i - 1]) != size)
	{
		write_err_lent(tab, 1);
		exit(1);
	}
}

void	ft_check_borders(char **tab)
{
	size_t	i;
	int		j;

	i = 0;
	while (tab[0][i] == '1' && i < ft_strlen_map(tab[0]))
		i++;
	if (i != ft_strlen_map(tab[0]))
		write_err_lent(tab, 1);
	i = 1;
	while (tab[i])
	{
		if (tab[i][0] != tab[i][ft_strlen_map(tab[i]) - 1] || tab[i][0] != '1')
			write_err_lent(tab, 2);
		i++;
	}
	j = i - 1;
	i = 0;
	while (tab[j][i] == '1' && i < ft_strlen_map(tab[j]))
		i++;
	if (i != ft_strlen_map(tab[j]))
		write_err_lent(tab, 1);
}

void	ft_check_player(char **tab, t_map *ma)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	init_position(ma, 0, 0, tab);
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == 'P')
			{
				tmp++;
				init_position(ma, i, j, tab);
			}
			check_type(tab[i][j], ma);
			j++;
		}
		i++;
	}
	if (tmp != 1)
		write_err_lent(tab, 3);
}

void	check_type(char c, t_map *ma)
{
	if (c == 'C')
		ma->collectible++;
	else if (c == 'E')
		ma->ex = true;
}

void	init_position(t_map *map, int i, int j, char **tab)
{
	map->size_of_map_h = ft_tab_size(tab);
	map->size_of_map_v = ft_strlen_map(tab[0]);
	(map->player).p_x = j;
	(map->player).p_y = i;
}
