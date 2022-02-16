/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:35:47 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/12 15:00:15 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// #include<stdio.h>
// int main()
// {
// 	t_list	*rt;
// 	t_list	*head;
// 	t_list	*jilali;
// 	char *str = ft_strdup("wal3adaaaaaaaw");
// 	char *str1 = ft_strdup("wal3adaaaaaaaw2");
// 	head = ft_lstnew(str);
// 	rt	=	ft_lstnew(str1);
// 	ft_lstadd_back(&head, rt);
// 	jilali = ft_lstlast(head);
// 	printf("%s", jilali->content);
// }
