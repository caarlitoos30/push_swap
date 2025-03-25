/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_specific.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:04:27 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/26 00:14:13 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->index;
	b = (*stack)->next->index;
	c = (*stack)->next->next->index;
	if (a < b && b < c)
		return ;
	else if (a > b && b > c)
	{
		ft_rotate(stack, 'a');
		ft_swap(stack, 'a');
	}
	else if (a > b && c > b && c < a)
		ft_rotate(stack, 'a');
	if (b > a && a > c)
		ft_rotate_reverse(stack, 'a');
	else if (b > a && a < c)
	{
		ft_swap(stack, 'a');
		ft_rotate(stack, 'a');
	}
	else if (c > a && a > b)
		ft_swap(stack, 'a');
}

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*current;
	int			contador;
	int			num_move_other_stack;

	current = *stack_a;
	contador = 0;
	num_move_other_stack = 0;
	while (num_move_other_stack <= 0)
	{
		if ((*stack_a)->index == 0)
		{
			ft_push(stack_a, stack_b, 'b');
			num_move_other_stack++;
		}
		else
			ft_rotate(stack_a, 'a');
	}
	ft_sort_three(stack_a);
	ft_push(stack_b, stack_a, 'a');
}

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*current;
	int			count;
	int			num_move_other_stack;

	current = *stack_a;
	count = 0;
	num_move_other_stack = 0;
	while (num_move_other_stack <= 1)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			ft_push(stack_a, stack_b, 'b');
			num_move_other_stack++;
		}
		else
			ft_rotate(stack_a, 'a');
	}
	ft_sort_three(stack_a);
	ft_push(stack_b, stack_a, 'a');
	ft_push(stack_b, stack_a, 'a');
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_swap(stack_a, 'a');
}
