/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:18:21 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/19 17:53:44 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define INT_MIN  -2147483648
# define INT_MAX  2147483647

typedef struct	s_stack
{
	int		value;
	struct s_stack	*next;
}	t_stack;

typedef struct	s_chunk
{
	int	*sorted_array;
	int		range;
	int		size;
	int		start;
	int		end;
}	t_chunk;

// stack
t_stack	*init_stack(int ac, char **av , t_stack *a);
void	stack_push(t_stack **st , int value);
int	size_stack(t_stack *st);
void	free_stack(t_stack **st);

// operations
void	swap_stack(t_stack **st);
void	rotate_stack(t_stack **st);
void	push_to_other_stack(t_stack **from, t_stack **to);
void	rotate_reverse_stack(t_stack **st);

// parsing
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	error_message(void);

// utils
void	swap(int *a ,int *b);
int	ft_atoi(char *str);
void	ft_putstr(char *str);
int	ft_isdigit(int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *src);
size_t	ft_strlen(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_isspace(int c);

// sort
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a,t_stack **b);
void	sort_five(t_stack **a,t_stack **b);
void	small_sort(t_stack **a,t_stack **b,int size);
void	sorted_stack(t_stack **a,t_stack **b);
void	large_sort(t_stack **a, t_stack **b, int size);

// sort/utils
int	find_min(t_stack **a);
void	sort_array(int *array, int size);
int	*stack_to_array(t_stack *st ,int size);


// chunks
void	init_chunk(t_stack **a, t_chunk *chunk, int size);
void	next_chunk(t_chunk *chunk);
int	find_range(int size);
void	push_element_to_b(t_stack **a, t_stack **b, t_chunk *chunk);
void	push_elements_to_a(t_stack **a, t_stack **b);

// check input
void	check_input(int argc, char **argv);

#endif
