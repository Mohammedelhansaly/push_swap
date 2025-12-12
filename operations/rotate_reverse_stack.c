/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:56:15 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 17:36:46 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_reverse_stack(t_stack *st)
{
    if (st->top < 1)
        return; 

    int last = st->data[st->top];  
    int i = st->top;

    while (i > 0)
    {
        st->data[i] = st->data[i - 1]; 
        i--;
    }

    st->data[0] = last; 
}