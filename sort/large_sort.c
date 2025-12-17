/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:42:18 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/17 19:11:16 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_range(int size)
{
    if (size <= 100)
        return size / 6;
    else if (size <= 500)
        return size / 12;
    else
        return size / (size / 2);
}
void	init_chunk(t_stack **a, t_chunk *chunk, int size)
{
	int	*array;

	array = stack_to_array(*a, size);
	if (!array)
		return ;
	sort_array(array, size);
	chunk->range = find_range(size);
	chunk->sorted_array = array;
	chunk->size = size;
	chunk->start = 0;
	chunk->end = chunk->range;
}

void	next_chunk(t_chunk *chunk)
{
	if (chunk->start < chunk->end)
		chunk->start += 1;
	if (chunk->end < chunk->size - 1)
		chunk->end += 1;
}

void	large_sort(t_stack **a, t_stack **b, int size)
{
	t_chunk	*chunk;

	chunk = (t_chunk *)malloc(sizeof(t_chunk));
	if (!chunk)
		return ;
	init_chunk(a, chunk, size);
	push_element_to_b(a, b, chunk);
	push_elements_to_a(a, b);
	free(chunk->sorted_array);
	free(chunk);
}

