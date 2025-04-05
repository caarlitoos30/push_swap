/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_v2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:45:46 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 17:01:55 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_equals(t_stack *head)
{
	t_stack	*i;
	t_stack	*j;

	i = head;
	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->content == j->content)
				error_message("Error", 1);
			j = j->next;
		}
		i = i->next;
	}
}

int	count_r(t_stack *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

void	ft_clean_lst(t_stack **lst)
{
	t_stack	*current;
	t_stack	*aux;

	if (!lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		aux = current;
		current = current->next;
		free(aux);
	}
	*lst = NULL;
}

int	ft_size_list(t_stack *head)
{
	int	pos;

	if (!head)
		return (0);
	pos = 0;
	while (head != NULL)
	{
		pos++;
		head = head->next;
	}
	return (pos);
}

t_stack	*ft_lst_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void ft_push2(t_stack **before, int content, int pos)
{
	t_stack *new;

	if (!before)
		return;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return;
	
	new->content = content;
	new->index = 0;
	new->pos_init = pos;
	new->next = *before;
	*before = new;
}