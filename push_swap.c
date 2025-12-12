/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:24:58 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/12 19:20:39 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return 0;

    t_stack *a = init_stack(ac - 1);
    t_stack *b = init_stack(ac - 1);

    int i = 1;
    while (i < ac)
    {
        stack_push(a, ft_atoi(av[i]));
        i++;
    }

    sort_four(a,b);
    int j = 0;
    while (j <= a->top)
    {
        printf("%d ", a->data[j]);
        j++;
    }

    printf("------------------------------\n");
    j = 0;
    while (j <= b->top)
    {
        printf("%d", b->data[j]);
        j++;
    }

    free(a->data);
    free(a);

    free(b->data);
    free(b);

    return 0;
}
