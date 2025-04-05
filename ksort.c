/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:57:01 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 16:22:10 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_lobby(t_stack **stack_a, t_stack **stack_b)
{
	int	size_list;

	size_list = ft_size_list(*stack_a);
	if (size_list == 2)
		ft_swap(stack_a, 'a');
	else if (size_list == 3)
		ft_sort_three(stack_a);
	else if (size_list == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size_list == 5)
		ft_sort_five(stack_a, stack_b);
	else if (size_list > 5)
	{
		ksort_part_one(stack_a, stack_b, size_list);
		ksort_part_two(stack_a, stack_b, size_list);
	}
}

void	ksort_part_one(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 133 / 100;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			ft_push(stack_a, stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			ft_push(stack_a, stack_b, 'b');
			i++;
			if (!((*stack_a)->index <= i + range))
				ft_rr(stack_a, stack_b);
			else
				ft_rotate(stack_b, 'b');
		}
		else
			ft_rotate(stack_a, 'a');
	}
}

void	ksort_part_two(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(*stack_b, length - 1);
		rrb_count = (length + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != length - 1)
				ft_rotate(stack_b, 'b');
			ft_push(stack_b, stack_a, 'a');
			length--;
		}
		else
		{
			while ((*stack_b)->index != length - 1)
				ft_rotate_reverse(stack_b, 'b');
			ft_push(stack_b, stack_a, 'a');
			length--;
		}
	}
}
