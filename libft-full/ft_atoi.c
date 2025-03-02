/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:40:05 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:40:05 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	minus;

	i = spaces(str);
	minus = 0;
	res = 0;
	if (str[i] == '-')
	{
		minus++;
		i++;
	}
	else
		if (str[i] == '+')
			i++;
	while (ft_isdigit((int)str[i]) == 1)
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (minus % 2 == 1)
		res = -res;
	return (res);
}

// int main(int argc, char **argv)
// {
// 	if(argc != 2)
// 	{
// 		printf("faltan argumentos\n");
// 		return (-1);
// 	}
// 	printf("real: %d\n",atoi(argv[1]));
// 	printf("mio : %d\n",ft_atoi(argv[1]));
// }
