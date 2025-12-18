/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:28:31 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/18 15:47:30 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void rotate_stack(t_stack **st)
{
    t_stack *tmp;
    t_stack *last;

    if( !*st || !(*st)->next)
        return ;
    tmp = *st;
    *st = (*st)->next ;
    last = *st;
    while(last->next){
        last = last->next;
    }
    last->next = tmp;
    tmp->next = NULL;
}
