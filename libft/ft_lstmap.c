/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:55:19 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:54:28 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*tete;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	tete = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&tete, del);
			return (NULL);
		}
		ft_lstadd_back(&tete, new);
		lst = lst->next;
	}
	return (tete);
}
// void	*ft_map(void *ct)
// {
// 	int i;
// 	void	*c;
// 	char	*pouet;

// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		if (pouet[i] == 'o')
// 			pouet[i] = 'a';
// 	return (c);
// }
// void del(void *p)
// {
// 	free(p);
// }
// #include<stdio.h>
// int main()
// {
// 	t_list	*rt;
// 	t_list	*head;

// 	char *str = ft_strdup("wal3adooooaaaaaaaw");
// 	char *str1 = ft_strdup("wal3adooooaaaaaaaw2");
// 	head = ft_lstnew(str);
// 	rt	=	ft_lstnew(str1);
// 	ft_lstadd_back(&head,rt);
// 	head = ft_lstmap(head,&ft_map,&del);
// 	while(head)
// 	{
// 		printf("%s\n",head->content);
// 		head = head->next;
// 	}
// }