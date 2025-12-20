/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:46:31 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:32:24 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack **st, int value)
{
	t_stack	*new;

	if (!st)
		return ;
	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->value = value;
	new->next = *st;
	*st = new;
}
