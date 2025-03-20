/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:21 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/20 19:29:50 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(const char *str)
{
	long	result;

	ft_is_numeric(str);
	if (ft_strlen(str) > 11)
		ft_msm_error("Error", 1);
	result = ft_atoi_check(str);
	return (result);
}