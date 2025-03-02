/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:35:51 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:35:51 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(const char *s, int c)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == c)
			ct++;
		i++;
	}
	return (ct);
}
// #include <stdio.h>
// int main (){
// 	printf("%s", ft_strchr("htrhrh %c rg45g4", '%'));
// }