/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:34:42 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:34:42 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	res;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (int)n
		&& s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == (int)n)
		return (0);
	res = (unsigned char)*(s1 + i) - (unsigned char)*(s2 + i);
	return (res);
}
