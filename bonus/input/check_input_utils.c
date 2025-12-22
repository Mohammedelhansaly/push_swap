/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:22:06 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/22 19:02:40 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_double(t_stack **st)
{
	t_stack	*tmp;
	t_stack	*node;

	tmp = *st;
	while (tmp)
	{
		node = tmp->next;
		while (node)
		{
			if (tmp->value == node->value)
				return (1);
			node = node->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int	ft_is_empty_white_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_number(char *argv)
{
	int	i;
	int	hyphen_count;

	i = 0;
	hyphen_count = 0;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '-' && argv[i + 1] != '\0')
	{
		hyphen_count++;
		i++;
	}
	if (!ft_isdigit(argv[i]))
		return (0);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]) && !ft_isspace(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*join_arg(int argc, char **argv)
{
	char	*joined;
	char	*temp;
	int		i;

	i = 1;
	joined = ft_strdup("");
	while (i < argc)
	{
		if (!ft_is_empty_white_space(argv[i]))
		{
			temp = ft_strjoin(joined, argv[i]);
			free(joined);
			joined = ft_strjoin(temp, " ");
			free(temp);
		}
		i++;
	}
	if (ft_is_empty_white_space(joined))
	{
		free(joined);
		error_message();
	}
	return (joined);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
