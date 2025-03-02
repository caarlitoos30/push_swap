/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:38:18 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/02 19:45:51 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first_b;

	if (!stack_b || !*stack_b)
		return ;
	first_b = *stack_b;
	*stack_b = first_b->next;
	if (*stack_b)
		(*stack_b)->previous = NULL;
	first_b->next = *stack_a;
	if (*stack_a)
		(*stack_a)->previous = first_b;
	first_b->previous = NULL;
	*stack_a = first_b;
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*first_a;

	if (!stack_a || !*stack_a)
		return ;
	first_a = *stack_a;
	*stack_a = first_a->next;
	if (*stack_a)
		(*stack_a)->previous = NULL;
	first_a->next = *stack_b;
	if (*stack_b)
		(*stack_b)->previous = first_a;
	first_a->previous = NULL;
	*stack_b = first_a;
}
