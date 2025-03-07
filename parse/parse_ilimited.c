/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ilimited.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:57:52 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/07 19:25:10 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void process_arguments(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (checkatoi(argv[i]) == 0)
		{
			int num = ft_atoi(argv[i]);
		}
		else
		{
			ft_printf("Error: '%s' no es un número entero válido\n", argv[i]);
		}
		i++;
    }
}