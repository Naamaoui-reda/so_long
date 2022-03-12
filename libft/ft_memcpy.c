/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:26 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/16 22:14:42 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	char		*buffer;
	const char	*buffer2;
	size_t		index;

	buffer = dst;
	buffer2 = src;
	index = 0;
	if (!dst && !src)
		return (NULL);
	while (index < size)
	{
		buffer[index] = buffer2[index];
		index++;
	}
	return (buffer);
}
