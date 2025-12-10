/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:24:58 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/10 19:37:08 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"
#include "libft/libft.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return 0;

    t_stack *st = init_stack(ac - 1);
    int i = 1;
    while (i < ac)
    {
        stack_push(st, ft_atoi(av[i]));
        i++;
    }
    int j = 0;
    while (j <= st->top)
    {
        printf("%d\n", st->data[j]);
        j++;
    }

    free(st->data);
    free(st);

    return 0;
}
