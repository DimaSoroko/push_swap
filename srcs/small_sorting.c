/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:28:49 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 11:16:16 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	min(t_data **stack, int number)
{
	t_data	*head;
	int		min_index;

	head = *stack;
	min_index = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min_index) && head->index != number)
			min_index = head->index;
	}
	return (min_index);
}

void	sort_three(t_data **stack_a)
{
	if ((*stack_a)->index == min(stack_a, -1)
		&& (*stack_a)->next->index != min(stack_a, min(stack_a, -1)))
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->index == min(stack_a, min(stack_a, -1)))
	{
		if ((*stack_a)->next->index == min(stack_a, -1))
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if ((*stack_a)->next->index == min(stack_a, -1))
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	sort_four(t_data **stack_a, t_data **stack_b)
{
	int	distance;

	distance = get_node_distance(stack_a, min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
}

void	sort_five(t_data **stack_a, t_data **stack_b)
{
	int	distance;

	distance = get_node_distance(stack_a, min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a);
}
