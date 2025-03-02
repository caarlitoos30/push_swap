/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:37:34 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:37:34 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	void	*h;

	i = 0;
	while (i < (int)n)
	{
		if (*(char *)(s + i) == c)
		{
			h = (char *)(s + i);
			return (h);
		}
		i++;
	}
	return (NULL);
}
