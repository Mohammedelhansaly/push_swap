/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:11:38 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:26:17 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if (!*a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value)
	{
		sa(a);
	}
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	min;

	min = find_min(a);
	if (min == 1)
		ra(a);
	if (min == 2)
	{
		ra(a);
		ra(a);
	}
	if (min == 3)
		rra(a);
	pb(a, b);
	sort_three(a);
	pa(b, a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min;

	min = find_min(a);
	if (min == 1)
		ra(a);
	if (min == 2)
	{
		ra(a);
		ra(a);
	}
	if (min == 3)
	{
		rra(a);
		rra(a);
	}
	if (min == 4)
		rra(a);
	pb(a, b);
	sort_four(a, b);
	pa(b, a);
	pa(b, a);
}

void	small_sort(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		return ;
}
