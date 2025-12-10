/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:18:21 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/10 19:31:37 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_stack
{
    int *data;
    int top;
    int size;
} t_stack;

t_stack *init_stack(int size);
void stack_push(t_stack *st , int new);
int stack_pop(t_stack *st);
void sa(t_stack *st);





#endif