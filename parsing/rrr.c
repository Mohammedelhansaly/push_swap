/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:51:43 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 19:12:10 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rrr(t_stack *a, t_stack *b)
{
    rotate_reverse_stack(a);
    rotate_reverse_stack(b);

    ft_putstr("rrr\n");
}