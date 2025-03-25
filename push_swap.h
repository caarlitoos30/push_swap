/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:05:55 by calguaci          #+#    #+#             */
/*   Updated: 2025/03/26 00:18:43 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include "./libft-full/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	int				pos_init;
	struct s_stack	*next;
}					t_stack;

//moves.c
void	ft_swap(t_stack **list, char flag);
void	ft_rotate(t_stack **list, char flag);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_reverse(t_stack **list, char flag);
void	ft_push(t_stack **a, t_stack **b, char flag);
//start_stack.c
int		calc_nelements(int argc, char **argv);
int		*parse(int argc, char **argv, t_stack **stack_a, char **words);
void	ft_numeric(const char *str);
//aux.c
void	error_message(char *str, int flag);
int		ft_atoi_check(const char *str);
void	ft_free_argv(char **mat);
void	ft_sort_index(t_stack *head);
int		ft_sqrt(int number);
//correc_stack.c
int		ft_check_string(const char *str);
void	ft_check_range(long number);
//push_swap.c
void	ft_is_ordened(t_stack *head);
//ksort.c
void	ft_sort(t_stack **stack_a, t_stack **stack_b);

//sort_specific.c
void	ft_sort_three(t_stack **stack);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b);




#endif