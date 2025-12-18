/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:04:01 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/18 20:40:04 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

// static void ft_push_swap(char *line, t_stack **a, t_stack **b)
// {
//     if (ft_strcmp("sa\n", line) == 0)
//         sa(a);
//     else if (ft_strcmp("sb\n", line) == 0)
//         sb(b);
//     else if (ft_strcmp("ss\n", line) == 0)
//         ss(a, b);
//     else if (ft_strcmp("pa\n", line) == 0)
//         pa(b, a);
//     else if (ft_strcmp("pb\n", line) == 0)
//         pb(a, b);
//     else
//     {
//         free(line);
//         free_stack(a);
//         free_stack(b);
//         error_message();
//     }
// }

// static void ft_rotate_stack(char *line, t_stack **a, t_stack **b)
// {
//     if (ft_strcmp("ra\n", line) == 0)
//         ra(a);
//     else if (ft_strcmp("rb\n", line) == 0)
//         rb(b);
//     else if (ft_strcmp("rr\n", line) == 0)
//         rr(a, b);
//     else if (ft_strcmp("rra\n", line) == 0)
//         rra(a);
//     else if (ft_strcmp("rrb\n", line) == 0)
//         rrb(b);
//     else if (ft_strcmp("rrr\n", line) == 0)
//         rrr(a, b);
//     else
//     {
//         free(line);
//         free_stack(a);
//         free_stack(b);
//         error_message();
//     }
// }
// static void execute(char *line, t_stack **a, t_stack **b)
// {
//     if (ft_strcmp("sa\n", line) == 0 || ft_strcmp("sb\n", line) == 0 || ft_strcmp("ss\n", line) == 0 || ft_strcmp("pa\n", line) == 0 || ft_strcmp("pb\n", line) == 0)
//     {
//         ft_push_swap(line, a, b);
//     }
//     else
//     {
//         ft_rotate_stack(line, a, b);
//     }
// }
int main(int ac, char **av)
{

    t_stack *a;
    t_stack *b;
    char *line;

    if (ac < 2)
        return 0;
    if (!av)
        error_message();

    a = NULL;
    a = init_stack(ac, av, a);
    b = NULL;
    check_input(ac, av);

    int fd = open("checker.h", O_RDONLY);
    line = get_next_line(fd);
    while ((line = get_next_line(fd)))
    {
        // execute(line, &a, &b);
        // free(line);
        printf("%s", line);
    }

    // if (check_sorted(a) && !b)
    //     ft_putstr("OK\n");
    // else
    //     ft_putstr("KO\n");
    // free_stack(&a);
    // free_stack(&b);
}