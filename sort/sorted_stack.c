/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:30:33 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/16 18:10:44 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sorted(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
    while (tmp->next)
    {
        if (tmp->value > tmp->next->value)
        {
            return (0);
        }
        tmp = tmp->next;
    }
    return (1);
}
void sorted_stack(t_stack **a, t_stack **b)
{
    int size = size_stack(*a);
    if (check_sorted(*a))
    {
        return;
    }
    else if (size <= 5)
    {
        small_sort(a, b, size);
    }
    else
    {
        large_sort(a, b, size);
    }
}