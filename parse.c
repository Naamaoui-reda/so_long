/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:44:30 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:31 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	**ft_read(int fd)
{
	char	**tab;
	int		i;

	if (fd < 0)
		perror_exit(1);
	i = 0;
	tab = (char **)malloc(sizeof (char *));
	if (!tab)
	{
		perror("Allocation failed");
		exit (1);
	}
	while (1337)
	{
		tab [i] = get_next_line(fd);
		if (tab[i++] == NULL)
			return (tab);
		tab = ft_realloc(tab, i + 1);
	}
	return (NULL);
}

int	ft_test(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		write(2, "Error:\nToo few arguments\n", 25);
		exit (1);
	}
	if (ft_strncmp(".ber", av[1] + (ft_strlen(av[1]) - 4), 4))
	{
		write(2, "Error:\nThe map should be under the format *.ber\n", 48);
		exit(1);
	}
	fd = open (av[1], O_RDONLY);
	return (fd);
}
