/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:05:55 by calguaci          #+#    #+#             */
/*   Updated: 2025/04/05 17:03:38 by calguaci         ###   ########.fr       */
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
int		*parse(int argc, char **argv, t_stack **stack_a, char **words);
int		calc_nelements(int argc, char **argv);
size_t	ft_count_arg(char const *s, char c);
void	ft_numeric(const char *str);
void	ft_check_empty(char const *s);
//aux.c
void	error_message(char *str, int flag);
int		ft_atoi_check(const char *str);
void	ft_free_argv(char **mat);
void	ft_sort_index(t_stack *head);
int		ft_sqrt(int number);
//correc_stack.c
int		ft_check_string(const char *str);
void	ft_check_range(long number);
void	ft_check_equals(t_stack *head);
//push_swap.c
void	ft_is_ordened(t_stack *head);
//ksort.c
void	ft_sort_lobby(t_stack **stack_a, t_stack **stack_b);
void	ksort_part_one(t_stack **stack_a, t_stack **stack_b, int length);
void	ksort_part_two(t_stack **stack_a, t_stack **stack_b, int length);

//sort_specific.c
void	ft_sort_three(t_stack **stack);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);

//aux_v2.c
int		count_r(t_stack *stack, int index);
void	ft_clean_lst(t_stack **lst);
int		ft_size_list(t_stack *head);
t_stack	*ft_lst_last(t_stack *lst);
void 	ft_push2(t_stack **before, int content, int pos);


#endif