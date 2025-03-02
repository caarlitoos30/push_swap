/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:32:54 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:32:54 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	indexinit(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static int	indexend(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = (int)ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
	}
	return ((int)ft_strlen(s1) - i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		indexi;
	int		indexe;
	char	*res;

	if (!s1 || !set)
		return (ft_strdup(""));
	if (set[0] == '\0')
		return (ft_strdup(s1));
	indexi = indexinit(s1, set);
	indexe = indexend(s1, set);
	if (((int)ft_strlen(s1) - indexe - indexi) <= 0)
		return (ft_strdup(""));
	res = ft_substr(s1, indexi, ((int)ft_strlen(s1) - indexe - indexi));
	return (res);
}
