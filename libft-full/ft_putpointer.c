/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:45:29 by jainavas          #+#    #+#             */
/*   Updated: 2025/02/16 21:28:48 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static size_t	get_digits(unsigned long n, char *base)
{
	size_t	i;
	char	*buffer;

	i = 0;
	buffer = malloc(sizeof(char) * 16);
	while (n > 0)
	{
		buffer[i++] = base[n % 16];
		n /= 16;
	}
	free(buffer);
	return (i);
}

char	*print_number(char *buffer, unsigned long unbr, char *base, int nbase)
{
	unsigned int	i;
	char			temp;

	i = 0;
	if (unbr == 0)
	{
		buffer[0] = base[0];
		buffer[1] = '\0';
		return (buffer);
	}
	while (unbr > 0)
	{
		buffer[i++] = base[unbr % nbase];
		unbr /= nbase;
	}
	buffer[i] = '\0';
	i = 0;
	while (i < ft_strlen(buffer) / 2)
	{
		temp = buffer[i];
		buffer[i] = buffer[ft_strlen(buffer) - 1 - i];
		buffer[ft_strlen(buffer) - 1 - i] = temp;
		i++;
	}
	return (buffer);
}

char	*ft_putnbr_base(unsigned long nbr, char *base)
{
	int			nbase;
	char		*buffer;

	buffer = malloc(sizeof(char) * (get_digits(nbr, BASE16) + 1));
	if (!buffer)
		return ((void *)0);
	nbase = (int)ft_strlen(base);
	buffer = print_number(buffer, nbr, base, nbase);
	return (buffer);
}
