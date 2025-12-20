/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:56:15 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:14:12 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse_stack(t_stack **st)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*st || !(*st)->next)
		return ;
	tmp = *st;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *st;
	*st = last;
}
