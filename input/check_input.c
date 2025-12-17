/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:22:06 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/17 16:49:19 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static int check_double(char **str)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(*str);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int ft_is_empty_white_space(char *str)
{
	int i;

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

static int check_number(char *argv)
{
	int i;
	int hyphen_count;

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
static char *join_arg(int argc, char **argv)
{
	char *joined;
	char *temp;
	int i;

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

static void free_array(char **array)
{
	int i;

	i = 0;
	if (!array)
		return;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
void check_input(int argc, char **argv)
{
	int i;
	char **array;
	char *args;
	long tmp_argv;

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