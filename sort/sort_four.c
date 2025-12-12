/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:05:32 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 19:21:24 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_stack *a)
{
    int i = 0;
    int min_idx = 0;

    while (i <= a->top)
    {
        if (a->data[i] < a->data[min_idx])
            min_idx = i;
        i++;
    }
    return min_idx;
}

void sort_four(t_stack *a, t_stack *b)
{
    int index = find_min(a);  

    if (index == 1)
        ra(a);
    else if (index == 2)
    {
        ra(a);
        ra(a);
    }
    else if (index == 3)
        rra(a);

    
    pb(a, b);        
    sort_three(a);   
    pa(b, a); 

}
