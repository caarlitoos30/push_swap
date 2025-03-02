/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:37:13 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:37:13 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned int	i;

	d = (unsigned char *)dst;
	i = 0;
	if (dst == src || (int)len == 0)
		return (dst);
	if (d < (unsigned char *)src)
	{
		while (len--)
		{
			d[i] = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		i = (int)len - 1;
		while ((int)len--)
		{
			d[i] = *(char *)(src + i);
			i--;
		}
	}
	return (dst);
}
