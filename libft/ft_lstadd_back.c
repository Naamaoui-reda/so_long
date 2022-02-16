/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:40:56 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:49:26 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
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
// 	while(head)
// 	{
// 		printf("%s",(head)->content);
// 		head = (head)->next;
// 	}
// }