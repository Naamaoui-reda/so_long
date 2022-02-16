/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:46:57 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:53:20 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
// void	f(void *elem)
// {
// 	int		len;
// 	char		*content;

// 	len = 0;
// 	content = (char *)elem;
// 	while (content[len])
// 	{
// 		content[len++] = 'd';
// 	}
// }
// #include<stdio.h>
// int main()
// {
// 	t_list	*rt;
// 	t_list	*head;
// 	char *str = ft_strdup("wal3adaaaaaaaw");
// 	char *str1 = ft_strdup("wal3adaaaaaaaw2");
// 	head = ft_lstnew(str);
// 	rt	=	ft_lstnew(str1);
// 	ft_lstadd_back(&head,rt);
// 	ft_lstiter(head,&f);
// 	while(head)
// 	{
// 		printf("%s\n",head->content);
// 		head = head->next;
// 	}
// }	