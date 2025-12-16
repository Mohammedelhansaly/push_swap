/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:20:52 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/16 15:51:49 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int find_max(t_stack *st)
{
    int max = st->value;

    while (st)
    {
        if (st->value > max)
        {
            max = st->value;
        }
        st = st->next;
    }
    return (max);
}
int find_max_pos(t_stack *st, int max_value)
{
    int index = 0;
    while (st)
    {
        if (st->value == max_value)
        {
            return (index);
        }
        index++;
        st = st->next;
    }
    return (index);
}
void push_element_to_a(t_stack **a, t_stack **b)
{
    int max_value;
    int max_pos;
    int size;

    if (!b || !a)
        return;

    while (*b)
    {
        max_value = find_max(*b);
        max_pos = find_max_pos(*b, max_value);
        size = size_stack(*b);

        if (max_pos <= size / 2)
        {
            while ((*b)->value != max_value)
            {
                rb(b);
            }
        }
        else
        {
            while ((*b)->value != max_value)
            {
                rrb(b);
            }
        }
        pa(b, a);
        if (*b && (*b)->value > (*a)->value)
            ra(a);
    }
}
// pa
// pa
// rb
// pa
// rrb
// pa
// rb
// pa
// pa