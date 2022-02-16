/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:12:13 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:51:09 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*b;

	while (*lst)
	{
		(*del)((*lst)->content);
		b = (*lst)->next;
		free(*lst);
		(*lst) = b;
	}
	*lst = NULL;
}
// void del(void *p)
// {
// 	free(p);
// }
// #include<stdio.h>
// int	main()
// {
// 	t_list	*rt;
// 	t_list	*head;
// 	char *str = ft_strdup("wal3adaaaaaaaw");
// 	char *str1 = ft_strdup("wal3adaaaaaaaw2");
// 	head = ft_lstnew(str);
// 	rt	=	ft_lstnew(str1);
// 	ft_lstadd_back(&head,rt);
// 	ft_lstclear(&head,&del);
// 	if(head)
// 		printf("e7em");
// 	else
// 		printf("khawyaaaaaa");
// 	return(0);
// }