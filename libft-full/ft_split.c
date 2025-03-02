/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:36:04 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:36:06 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_words(char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0')
			&& !(str[i] == charset || str[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char charset)
{
	int	i;

	i = 0;
	while (!(from[i] == charset || from[i] == '\0'))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

int	write_split(char **split, char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while (!(str[i + j] == charset || str[i + j] == '\0'))
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (1);
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

void	protectsplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

char	**ft_split(char *str, char charset)
{
	char	**split;
	int		words;

	if (!str)
		return (NULL);
	words = count_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	split[words] = 0;
	if (write_split(split, str, charset) == 1)
		protectsplit(split);
	return (split);
}

// int	main(){
// 	int i=-1;
// 	char **frase = ft_split("hola buenas tardes  jja  ", ' ');
// 	while(i++<3){
// 	printf("%s\n", frase[i]);
// 	}
// }