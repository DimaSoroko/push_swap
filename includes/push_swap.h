/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:52:15 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 11:15:26 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_data
{
	int				number;
	int				index;
	struct s_data	*next;
}				t_data;

void	free_stack(t_data **stack);
void	ft_free(char **str);
void	check_args(int argc, char **argv);
t_data	*create_node(int number);
t_data	*get_last(t_data *head);
void	add_node_front(t_data **stack, t_data *new_node);
void	add_node_back(t_data **stack, t_data *new_node);
void	push(t_data **stack_src, t_data **stack_dst);
void	swap(t_data **stack);
void	rotate(t_data **stack);
void	reverse_rotate(t_data **stack);
void	sa(t_data **stack_a);
void	sb(t_data **stack_b);
void	ss(t_data **stack_a, t_data **stack_b);
void	pa(t_data **stack_a, t_data **stack_b);
void	pb(t_data **stack_b, t_data **stack_a);
void	ra(t_data **stack_a);
void	rb(t_data **stack_b);
void	rr(t_data **stack_a, t_data **stack_b);
void	rra(t_data **stack_a);
void	rrb(t_data **stack_b);
void	rrr(t_data **stack_a, t_data **stack_b);
int		min(t_data **stack, int number);
void	sort_three(t_data **stack_a);
void	sort_four(t_data **stack_a, t_data **stack_b);
void	sort_five(t_data **stack_a, t_data **stack_b);
void	radix_sort(t_data **stack_a, t_data **stack_b);
void	simple_sort(t_data **stack_a, t_data **stack_b);
void	stack_index(t_data **stack);
void	stack_init(t_data **stack, int argc, char **argv);
int		stack_size(t_data *head);
int		is_sorted(t_data **stack);
void	error(char *msg);
int		get_node_distance(t_data **stack, int index);

#endif
