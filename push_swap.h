/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:05:55 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/20 19:20:18 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include "libft-full/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	int				pos_init;
	struct s_stack	*next;
}					t_stack;


void	ft_swap(t_stack **list, char flag);
void	ft_rotate(t_stack **list, char flag);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_reverse(t_stack **list, char flag);
void	ft_push(t_stack **a, t_stack **b, char flag);



#endif