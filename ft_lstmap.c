/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:29:37 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/13 18:15:53 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*a;
	t_list	*first;

	first = 0;
	if (lst)
	{
		while (lst)
		{
			a = ft_lstnew(f(lst->content));
			if (!a)
			{
				ft_lstclear(&a, del);
				return (0);
			}
			ft_lstadd_back(&first, a);
			lst= lst->next;
		}
		return (first);
	}
	return (0);
}

// void *ft_test(void * a)
// {
// 	return("test");
// }

// void ft_del(void * a)
// {
// 	free(a);
// }

// int main()
// {
// 	t_list *a = ft_lstnew("1");
// 	a->next = ft_lstnew("2");
// 	ft_lstadd_front(&a, ft_lstnew("0"));
// 	ft_lstadd_front(&a, ft_lstnew("-1"));
// 	t_list *head = ft_lstmap(a, ft_test, ft_del);
// 	while(head)
// 	{
// 		printf("%s", head->content);
// 		head = head->next;
// 	}
// }