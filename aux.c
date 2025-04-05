/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:36:08 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 21:07:44 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(char *str, int flag)
{
	while (*str != '\0')
	{
		write (flag, str++, 1);
	}
	write(flag, "\n", 1);
	exit(flag);
}

int	ft_atoi_check(const char *str)
{
	int		sign;
	long	result;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
		error_message("Error", 1);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result = result * sign;
	ft_check_range(result);
	return (result);
}

void	ft_free_argv(char **mat)
{
	size_t	i;

	i = 0;
	while (mat[i])
		free(mat[i++]);
	free(mat);
}

void	ft_sort_index(t_stack *head)
{
	t_stack	*i;
	t_stack	*j;

	i = head;
	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->content > j->content)
				i->index += 1;
			else if (i->content < j->content)
				j->index += 1;
			j = j->next;
		}
		i = i->next;
	}
}

int	ft_sqrt(int number)
{
	int	result;

	if (number == 0)
		return (0);
	result = 1;
	while (result * result < number)
		result++;
	return (result);
}
