/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:11:32 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 16:37:39 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **list, char flag)
{
	t_stack	*aux;

	if (!list || !(*list)->next)
		return ;
	aux = *list;
	*list = (*list)->next;
	aux->next = (*list)->next;
	(*list)->next = aux;
	if (flag == 'a')
		write(1, "sa\n", 3);
	if (flag == 'b')
		write(1, "sb\n", 3);
}

void	ft_rotate(t_stack **list, char flag)
{
	t_stack		*last;
	t_stack		*first;

	if (!list || !*list || ft_size_list(*list) < 2)
		return ;
	first = (*list);
	last = ft_lst_last(*list);
	*list = (*list)->next;
	last->next = first;
	first->next = NULL;
	if (flag == 'a')
		write(1, "ra\n", 3);
	if (flag == 'b')
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a, ' ');
	ft_rotate(stack_b, ' ');
	write(1, "rr\n", 3);
}

void	ft_rotate_reverse(t_stack **list, char flag)
{
	t_stack		*first;
	t_stack		*aux;
	t_stack		*last;

	if (!list || !(*list)->next)
		return ;
	first = (*list);
	last = ft_lst_last(*list);
	aux = *list;
	while (aux->next->next)
		aux = aux->next;
	aux->next = NULL;
	last->next = first;
	*list = last;
	if (flag == 'a')
		write(1, "rra\n", 4);
	if (flag == 'b')
		write(1, "rrb\n", 4);
}

void	ft_push(t_stack **a, t_stack **b, char flag)
{
	t_stack	*aux;

	if ((*a))
	{
		if (!a || !b)
			return ;
		aux = *a;
		(*a) = (*a)->next;
		aux->next = *b;
		(*b) = aux;
		if (flag == 'a')
			write(1, "pa\n", 3);
		if (flag == 'b')
			write(1, "pb\n", 3);
	}
}
