/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:24:19 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/13 15:36:35 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int find_max(t_stack *a)
{
    int i = 0;
    int max_idx = 0;

    while (i <= a->top)
    {
        if (a->data[i] > a->data[max_idx])
            max_idx = i;
        i++;
    }
    return max_idx;
}

static void fisrt_max(t_stack *a, t_stack *b)
{
    int index = find_max(a);
    if (index == 0)
        ra(a);
    else if (index == 1)
    {
        ra(a);
        ra(a);
    }
    else if (index == 2)
    {
        rra(a);
        rra(a);
    }
    else if (index == 3)
        rra(a);
    pb(a, b);
}

static void second_max(t_stack *a, t_stack *b)
{
    int index = find_max(a);
    if (index == 0)
        ra(a);
    else if (index == 1)
    {
        ra(a);
        ra(a);
    }
    else if (index == 2)
    {
        rra(a);
    }
    pb(a, b);
}
void sort_five(t_stack *a, t_stack *b)
{
    fisrt_max(a, b);
    second_max(a,b);
    sort_three(a);
    pa(b, a);
    pa(b,a);
}