/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_unlimited.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:57:52 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/07 19:55:10 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_unlimited(int argc, char **argv)
{
	int	i;
	int	*num;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (checkatoi(argv[i]) == 0)
		{
			num = ft_atoi(argv[i]);
		}
		else
		{
			ft_printf("Error: '%s' no es un número entero válido\n", argv[i]);
		}
		i++;
		j++;
	}
	return (num);
}
