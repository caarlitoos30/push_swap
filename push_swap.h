/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:02:59 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/01 21:23:00 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft-full/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int data;
	struct s_stack *previous;
	struct s_stack *next;
} t_stack;

typedef struct s_vars
{
	int prueba;
} t_vars;




#endif