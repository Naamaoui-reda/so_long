/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:13:48 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:52:00 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

// void del(void *p)
// {
// 	free(p);
// }
// int	main()
// {
// 	t_list *reda;
// 	reda = malloc(sizeof(t_list));
// 	reda->content = ft_strdup("hellllo");
// 	reda->next = NULL;
// 	ft_lstdelone(reda,&del);
// 	if(!reda)
// 		printf("e7em%s",reda->content);
// 	else
// 		printf("khawyaaaaaa");
// 	return(0);
// }