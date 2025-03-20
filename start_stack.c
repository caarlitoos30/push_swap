/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:26:15 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/20 19:43:46 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse(int argc, char **argv, t_stack **stack_a, char **words)
{
	int	*number;
	int	i;
	int	k;
	int	j;

	i = 1;
	j = 0;
	k = calc_nelements(argc, argv);
	number = (int *)malloc(sizeof(int) * k);
	if (!number)
		return (0);
	while (i < argc)
	{
		words = ft_split(argv[i++], ' ');
		k = 0;
		while (words[k])
			number[j++] = ft_check_string(words[k++]);
		ft_free_argv(words);
	}
	while (j-- > 0)
		ft_push(stack_a, number[j], j);
	return (number);
}

int	calc_nelements(int argc, char **argv)
{
	int	total_words;
	int	i;

	i = 1;
	total_words = 0;
	while (i < argc)
		total_words += ft_count_arg(argv[i++], ' ');
	return (total_words);
}

void	ft_numeric(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str < 48 || *str > 57)
		error_message("Error", 1);
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			error_message("Error", 1);
		str++;
	}
}