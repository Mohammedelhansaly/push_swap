/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:48:12 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/20 13:39:00 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../GetNextLine/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

t_stack				*init_stack(int ac, char **av, t_stack *a);
void				stack_push(t_stack **st, int value);
int					size_stack(t_stack *st);
void				free_stack(t_stack **st);

// operations
void				swap_stack(t_stack **st);
void				rotate_stack(t_stack **st);
void				push_to_other_stack(t_stack **from, t_stack **to);
void				rotate_reverse_stack(t_stack **st);

// parsing
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **b, t_stack **a);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				error_message(void);

// utils
void				swap(int *a, int *b);
int					ft_atoi(char *str);
void				ft_putstr(char *str);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strdup(char *src);
size_t				ft_strlen(char *str);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_strcmp(char *s1, char *s2);
int					ft_isspace(int c);
char				*ft_strchr(char *s, int c);

// check input
void				check_input(int argc, char **argv);
void				free_array(char **array);
char				*join_arg(int argc, char **argv);
int					check_number(char *argv);
int					ft_is_empty_white_space(char *str);
int					check_double(char **str);

// check_sort
int					check_sorted(t_stack *a);
#endif
