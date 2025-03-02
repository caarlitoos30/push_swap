/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:37:02 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:37:04 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sel_pointer(unsigned long x)
{
	int		numw;
	char	*res;

	if (x == (unsigned long)(void *)-1)
	{
		numw = ft_intputstr_fd("0xffffffffffffffff", 1);
		return (numw);
	}
	if (x == (unsigned long) NULL)
	{
		numw = ft_intputstr_fd("(nil)", 1);
	}
	else
	{
		numw = ft_intputstr_fd("0x", 1);
		res = ft_putnbr_base(x, BASE16);
		numw += ft_intputstr_fd(res, 1);
		free(res);
	}
	return (numw);
}

int	sel_op2(char x, va_list args, int numw)
{
	char	*res;

	numw = 0;
	if (x == 'c')
		numw = ft_intputchar_fd(((char)va_arg(args, int)), 1);
	if (x == 's')
		numw = ft_intputstr_fd((va_arg(args, char *)), 1);
	if (x == 'd' || x == 'i')
		numw = ft_intputnbr_fd((va_arg(args, int)), 1);
	if (x == 'u')
	{
		res = ft_ultoa((unsigned long)va_arg(args, unsigned int));
		numw = ft_intputstr_fd(res, 1);
		free(res);
	}
	if (x == '%')
		numw = ft_intputchar_fd('%', 1);
	return (numw);
}

int	sel_op(char x, va_list args, int numw)
{
	unsigned long	hex;
	char			*res;

	numw = 0;
	if (x == '%' || x == 'u' || x == 'd' || x == 's' || x == 'c' || x == 'i')
		return (sel_op2(x, args, numw));
	if (x == 'p')
		numw = sel_pointer((va_arg(args, unsigned long)));
	if (x == 'x')
	{
		hex = va_arg(args, unsigned int);
		res = ft_strtolower(ft_putlong_base(hex, BASE16));
		numw = ft_intputstr_fd(res, 1);
		free(res);
	}
	if (x == 'X')
	{
		hex = va_arg(args, unsigned int);
		res = ft_strtoupper(ft_putlong_base(hex, BASE16));
		numw = ft_intputstr_fd(res, 1);
		free(res);
	}
	return (numw);
}

int	ft_printf(char const *s, ...)
{
	va_list		args;
	size_t		i;
	int			numw;

	i = 0;
	numw = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			numw += sel_op(s[i + 1], args, numw);
			i = i + 2;
		}
		else
		{
			numw += ft_intputchar_fd(s[i], 1);
			i++;
		}
	}
	va_end(args);
	return (numw);
}
