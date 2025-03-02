/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:38:01 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:38:03 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newh;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	newh = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&newh, del);
			return (NULL);
		}
		ft_lstadd_back(&newh, new);
		lst = lst->next;
	}
	return (newh);
}
