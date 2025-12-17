/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:13:20 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/17 16:29:04 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	push_in_range(t_stack **a, t_stack **b, t_chunk *chunk)
{
	if (!a || !b || !chunk)
		return ;
	while (*a)
	{
		if ((*a)->value <= chunk->sorted_array[chunk->start])
		{
			pb(a, b);
			rb(b);
			next_chunk(chunk);
		}
		else if ((*a)->value <= chunk->sorted_array[chunk->end])
		{
			pb(a, b);
			if (size_stack(*b) > 2 && (*b)->value < (*b)->next->value)
				sb(b);
			next_chunk(chunk);
		}
		else
			ra(a);
	}
}

void	push_element_to_b(t_stack **a, t_stack **b, t_chunk *chunk)
{
	if (!a || !b || !chunk)
		return ;
	push_in_range(a, b, chunk);
}
// pb
// pb
// ra
// pb
// pb
// 1 2 4 5 7 9

// 9 1