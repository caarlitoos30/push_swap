/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:05:47 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/20 19:25:10 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**words;
	int		*number;

	stack_a = NULL;
	stack_b = NULL;
	number = process_argv(argc, argv, &stack_a, words);
	if (argc == 1)
		exit(1);
	//AlGORITMO IN PROCESS
}