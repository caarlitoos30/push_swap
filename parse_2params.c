/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:00:40 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/03 19:19:08 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

static int	skip_and_get_sign(const char *str, int *index)
{
	int	sign;

	sign = 1;
	*index = spaces(str);
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			sign = -1;
		(*index)++;
	}
	return (sign);
}

static int	convert_secured(const char *str, int index, int sign)
{
	long	res;

	res = 0;
	if (!ft_isdigit(str[index]))
		return (-1);
	while (ft_isdigit(str[index]))
	{
		if (res > (LONG_MAX / 10)
			|| (res == (LONG_MAX / 10) && (str[index] - '0') > (LONG_MAX % 10)))
			return (-1);
		res = res * 10 + (str[index] - '0');
		index++;
	}
	if (str[index] != '\0')
		return (-1);
	if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		return (-1);
	return (0);
}

int	checkatoi(const char *str)
{
	int	index;
	int	sign;

	sign = skip_and_get_sign(str, &index);
	return (convert_secured(str, index, sign));
}

void	parse1(const char *input)
{
	char	**numbers;
	int		i;
	int		num;

	numbers = ft_split(input, ' ');
	if (!numbers || !numbers[0])
	{
		free(numbers);
		return ;
	}
	i = 0;
	while (numbers[i])
	{
		if (checkatoi(numbers[i]) == 0)
			num = ft_atoi(numbers[i]);
		else
			num = 0;
		free(numbers[i]);
		i++;
	}
	free(numbers);
}
