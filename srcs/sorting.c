/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:25:41 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 10:52:36 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_data	*get_min(t_data **stack)
{
	t_data	*head;
	t_data	*min;
	int		temp;

	min = NULL;
	temp = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!temp || head->number < min->number))
			{
				min = head;
				temp = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	stack_index(t_data **stack)
{
	t_data	*head;
	int		index;

	index = 0;
	head = get_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_min(stack);
	}
}

void	simple_sort(t_data **stack_a, t_data **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || stack_size(*stack_a) == 0
		|| stack_size(*stack_a) == 1)
		return ;
	size = stack_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}

void	radix_sort(t_data **stack_a, t_data **stack_b)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = stack_size(*stack_a);
	while (!is_sorted(stack_a))
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (stack_size(*stack_b) != 0)
			pa(stack_b, stack_a);
		i++;
	}
}
