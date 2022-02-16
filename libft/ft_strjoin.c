/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:41:01 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 03:06:16 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_f;
	char	*str;

	if (!s1)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_f = len_s2 + len_s1 + 1;
	str = (char *)malloc(sizeof(char) * len_f);
	if (str == NULL)
		return (NULL);
	len_s1 = 0;
	len_s2 = 0;
	len_f = 0;
	while (s1[len_s1])
		str[len_f++] = s1[len_s1++];
	while (s2[len_s2])
		str[len_f++] = s2[len_s2++];
	str[len_f] = 0;
	return (str);
}
