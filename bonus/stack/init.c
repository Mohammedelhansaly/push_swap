/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:10:55 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 13:46:17 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	*join_args(int ac, char **av)
{
	char	*joined;
	char	*tmp;
	int		i;

	i = 1;
	joined = ft_strdup("");
	while (i < ac)
	{
		tmp = ft_strjoin(joined, av[i]);
		free(joined);
		joined = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (joined);
}

t_stack	*init_stack(int ac, char **av, t_stack *a)
{
	char	**array;
	char	*joined_args;
	int		i;

	i = 0;
	joined_args = join_args(ac, av);
	array = ft_split(joined_args, ' ');
	free(joined_args);
	while (array[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		stack_push(&a, ft_atoi(array[i]));
		i--;
	}
	free_array(array);
	return (a);
}
