/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:22:35 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/03 15:41:30 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = *stack;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	(*stack)->previous = last;
	*stack = last;
}

void	rrb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	last = *stack_b;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->previous = NULL;
	last->next = *stack_b;
	(*stack_b)->previous = last;
	*stack_b = last;
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
