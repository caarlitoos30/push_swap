/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:33:22 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:33:22 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!s2 || s2[0] == 0)
		return ((char *) s1);
	while (s1[i] && i < len)
	{
		while (s1[i + j] == s2[j] && s1[i + j] && i + j < len)
		{
			j++;
			if (s2[j] == 0)
				return ((char *) s1 + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(){
// 	char *f;
// 	printf("mio %s\n",ft_strnstr("holaweonpene",f,0));
// 	printf("real %s\n",strstr("holaweonpene",f));
// }
