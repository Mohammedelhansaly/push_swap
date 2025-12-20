/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:51:34 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 16:07:42 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int argc, char **argv)
{
	int			i;
	char		**array;
	char		*args;
	long		tmp_argv;

	i = 0;
	args = join_arg(argc, argv);
	array = ft_split(args, ' ');
	free(args);
	while (array[i])
	{
		tmp_argv = ft_atoi(array[i]);
		if (tmp_argv < INT_MIN || tmp_argv > INT_MAX || !check_number(array[i]))
		{
			free_array(array);
			error_message();
		}
		i++;
	}
	if (check_double(array) == 1)
	{
		free_array(array);
		error_message();
	}
	free_array(array);
}
