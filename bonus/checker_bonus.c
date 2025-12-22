/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:40:34 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/22 19:18:30 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	execute_push_swap(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp(line, "pa\n") == 0)
		pa(b, a);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(a, b);
	else if (ft_strcmp(line, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(a, b);
	else
	{
		free_stack(a);
		free_stack(b);
		free(line);
		error_message();
	}
}

static void	execute_rotate_reverse(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp(line, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(a, b);
	else
	{
		free_stack(a);
		free_stack(b);
		free(line);
		error_message();
	}
}

static void	ft_execute(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp(line, "pa\n") == 0 || ft_strcmp(line, "pb\n") == 0
		|| ft_strcmp(line, "sa\n") == 0 || ft_strcmp(line, "sb\n") == 0
		|| ft_strcmp(line, "ss\n") == 0)
		execute_push_swap(line, a, b);
	else
		execute_rotate_reverse(line, a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	if (!argv)
		error_message();
	if (argc < 2)
		return (0);
	check_input(argc, argv);
	stack_b = NULL;
	stack_a = init_stack(argc, argv, NULL);
	line = get_next_line(0);
	while (line)
	{
		ft_execute(line, &stack_a, &stack_b);
		free(line);
		line = get_next_line(0);
	}
	if (check_sorted(stack_a) && !stack_b)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
