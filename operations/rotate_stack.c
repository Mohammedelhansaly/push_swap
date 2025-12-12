/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:28:31 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 17:37:23 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_stack(t_stack *st)
{
    if (st->top < 1)
        return;

    int first = st->data[0];
    int i = 0;

    while (i < st->top)
    {
        st->data[i] = st->data[i + 1]; 
        i++;
    }
    st->data[st->top] = first; 
}