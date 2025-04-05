/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:05:47 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 16:44:30 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_ordened(t_stack *head)
{
	t_stack	*i;
	t_stack	*j;
	int		size_list;
	int		count_comparative;

	size_list = ft_size_list(head);
	if (size_list == 0)
		return ;
	i = head;
	j = i->next;
	if (size_list > 1)
	{
		count_comparative = 0;
		while (j != NULL)
		{
			if (j->content > i->content)
				count_comparative++;
			i = i->next;
			j = j->next;
		}
		if (count_comparative == size_list - 1)
			exit(0);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**words;
	int		*number;

	stack_a = NULL;
	stack_b = NULL;
	words = NULL;
	number = parse(argc, argv, &stack_a, words);
	if (argc == 1)
		exit(1);
	ft_is_ordened(stack_a);
	ft_check_equals(stack_a);
	ft_sort_index(stack_a);
	ft_sort_lobby(&stack_a, &stack_b);
	ft_clean_lst(&stack_a);
	ft_clean_lst(&stack_b);
	free(number);
}
