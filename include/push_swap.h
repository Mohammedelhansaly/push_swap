/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:18:21 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 19:18:16 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
    int *data;
    int top;
    int size;
} t_stack;


// initialize
t_stack *init_stack(int size);
void stack_push(t_stack *st , int new);
int stack_pop(t_stack *st);

// operations
void swap_stack(t_stack *st);
void rotate_stack(t_stack *st);
void push_to_other_stack(t_stack *from, t_stack *to);
void rotate_reverse_stack(t_stack *st);

// parsing
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *b, t_stack *a);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

// utils
void swap(int *a ,int *b);
int	ft_atoi(char *str);
void ft_putstr(char *str);
int	ft_isdigit(int c);

// sort
void sort_three(t_stack *a);
void sort_four(t_stack *a,t_stack *b);
#endif