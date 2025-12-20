/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:20:05 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 13:58:43 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_stack(t_stack **st)
{
	t_stack	*tmp;

	if (!*st || !(*st)->next)
		return ;
	tmp = (*st)->next;
	(*st)->next = tmp->next;
	tmp->next = *st;
	*st = tmp;
}
