/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:13:20 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/16 15:16:37 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void push_element_to_b(t_stack **a, t_stack **b, t_chunk *chunk)
{
    if (!a || !b || !chunk)
        return;

    while (chunk->start < chunk->size)
    {
        int pushed = 0;

        while (pushed < chunk->range && *a)
        {
            if ((*a)->value >= chunk->sorted_array[chunk->start] &&
                (*a)->value <= chunk->sorted_array[chunk->end])
            {
                pb(a, b);
                pushed++;
            }
            else
                ra(a);
        }
        next_chunk(chunk);
    }
}
// pb
// pb
// ra
// pb
// pb
// 1 2 4 5 7 9

// 9 1