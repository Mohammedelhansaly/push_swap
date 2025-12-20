/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:30:33 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:30:58 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

static int	check_sorted(t_stack *a)
{
	t_stack	*tmp;

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

void	sorted_stack(t_stack **a, t_stack **b)
{
	int	size;

	size = size_stack(*a);
	if (check_sorted(*a))
	{
		return ;
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
