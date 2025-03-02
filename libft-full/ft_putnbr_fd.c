/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:36:26 by calguaci          #+#    #+#             */
/*   Updated: 2025/02/16 21:36:26 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	print_number3(unsigned int unr, char *base, int fd)
{
	char	buffer[33];
	int		i;

	i = 0;
	while (unr > 0)
	{
		buffer[i] = base[unr % 10];
		unr /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(fd, &buffer[i], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	char			o;

	o = '0';
	if (n < 0)
	{
		write(fd, "-", 1);
		un = -n;
	}
	else
		un = n;
	if (n == 0)
		write(fd, &o, 1);
	else
		print_number3(un, "0123456789", fd);
}
// int main(){
// 	ft_putnr_fd(2453,1);
// }