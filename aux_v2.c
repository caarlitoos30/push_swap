/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_v2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:45:46 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 10:58:59 by calguaci         ###   ########.fr       */
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