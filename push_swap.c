/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:24:58 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/22 17:39:42 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (!av)
		error_message();
	if (ac < 2)
		return (0);
	check_input(ac, av);
	a = NULL;
	b = NULL;
	a = init_stack(ac, av, a);
	if (check_double(&a) == 1)
	{
		free_stack(&a);
		error_message();
	}
	sorted_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
