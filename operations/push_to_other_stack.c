/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_other_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:27:13 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 17:35:43 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_other_stack(t_stack *from, t_stack *to)
{
    if (from->top < 0)
        return; 

    int value = stack_pop(from);
    stack_push(to, value);
}