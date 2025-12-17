/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:20:52 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/17 16:29:35 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static int	find_max_value(t_stack *stack)
{
	int	max_value;

	max_value = stack->value;
	while (stack)
	{
		if (stack->value > max_value)
			max_value = stack->value;
		stack = stack->next;
	}
	return (max_value);
}

static int	get_postition(t_stack *stack, int max_value)
{
	int	postition;

	postition = 0;
	while (stack)
	{
		if (stack->value == max_value)
			return (postition);
		postition++;
		stack = stack->next;
	}
	return (postition);
}

void	push_elements_to_a(t_stack **a, t_stack **b)
{
	int	max_value;
	int	pos;
	int	size;

	if (!a || !b)
		return ;
	while (*b)
	{
		max_value = find_max_value(*b);
		pos = get_postition(*b, max_value);
		size = size_stack(*b);
		if (pos <= size / 2)
		{
			while ((*b)->value != max_value)
				rb(b);
		}
		else
		{
			while ((*b)->value != max_value)
				rrb(b);
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