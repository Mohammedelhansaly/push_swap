/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:41:19 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 17:03:47 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	if (a->data[0] > a->data[1] && a->data[0] < a->data[2]
		&& a->data[1] < a->data[2])
		sa(a);
	if (a->data[0] > a->data[1] && a->data[0] > a->data[2]
		&& a->data[1] > a->data[2])
	{
		sa(a);
		rra(a);
	}
	if (a->data[0] > a->data[1] && a->data[0] > a->data[2]
		&& a->data[1] < a->data[2])
		ra(a);
	if (a->data[0] < a->data[1] && a->data[0] < a->data[2]
		&& a->data[1] > a->data[2])
	{
		sa(a);
		ra(a);
	}
	if (a->data[0] < a->data[1] && a->data[0] > a->data[2]
		&& a->data[1] > a->data[2])
		rra(a);
}
