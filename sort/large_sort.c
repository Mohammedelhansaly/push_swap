/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:42:18 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/16 20:33:49 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_range(int size)
{
    if (size <= 50)
        return size / 3;
    else if (size <= 100)
        return size / 6;
    else if (size <= 500)
        return size / 12;
    else
        return size / (size / 2);
}
void init_chunk(t_stack **a, t_chunk *chunk, int size)
{
    int *array;

    array = stack_to_array(*a, size);
    if (!array)
        return;

    sort_array(array, size);

    chunk->range = find_range(size);
    if (chunk->range < 1)
        chunk->range = 1;

    chunk->size = size;
    chunk->sorted_array = array;
    chunk->start = 0;
    chunk->end = chunk->range - 1;
}

void next_chunk(t_chunk *chunk)
{
    if (!chunk)
        return;

    chunk->start += chunk->range;
    chunk->end += chunk->range;

    if (chunk->end >= chunk->size)
        chunk->end = chunk->size - 1;
}

// 1 2 4 5 7 9
// start = 0 + 2 +1 = 3
// end = 2 + 2 + 1 = 4
void large_sort(t_stack **a, t_stack **b, int size)
{
    t_chunk *chunk;

    chunk = malloc(sizeof(t_chunk));
    if (!chunk)
        return;

    init_chunk(a, chunk, size);
    push_element_to_b(a, b, chunk);

    // push back from B → A
    push_element_to_a(a, b);

    free(chunk->sorted_array);
    free(chunk);
}

