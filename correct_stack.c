/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:21 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 11:38:12 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(const char *str)
{
	long	result;

	ft_numeric(str);
	if (ft_strlen(str) > 11)
		error_message("Error", 1);
	result = ft_atoi_check(str);
	return (result);
}

void	ft_check_range(long number)
{
	if (number < -2147483648 || number > 2147483647)
		error_message("Error", 1);
}

void	ft_check_equal(t_stack *head)
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
