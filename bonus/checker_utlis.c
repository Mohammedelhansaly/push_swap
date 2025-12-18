/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utlis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:41:59 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/18 16:42:12 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int check_sorted(t_stack *a)
{
    t_stack *tmp;

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