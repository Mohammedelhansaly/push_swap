/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:30:33 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:28:55 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_stack *st, int size)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = st->value;
		st = st->next;
		i++;
	}
	return (array);
}

void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	find_min(t_stack **a)
{
	int		index;
	int		min;
	t_stack	*tmp;
	int		i;

	i = 0;
	index = 0;
	min = (*a)->value;
	tmp = *a;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}
