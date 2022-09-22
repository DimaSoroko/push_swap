/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_and_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:39:06 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 10:56:36 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_data **stack_src, t_data **stack_dst)
{
	t_data	*temp;

	if (stack_size(*stack_src) == 0)
		return ;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	add_node_front(stack_dst, temp);
}

void	swap(t_data **stack)
{
	t_data	*temp;

	if (stack_size(*stack) < 2)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	*stack = temp;
}

void	rotate(t_data **stack)
{
	t_data	*tail;
	t_data	*head;

	if (stack_size(*stack) < 2)
		return ;
	tail = get_last(*stack);
	head = *stack;
	*stack = (*stack)->next;
	tail->next = head;
	head->next = NULL;
}

void	reverse_rotate(t_data **stack)
{
	t_data	*prev_tail;
	t_data	*tail;

	if (stack_size(*stack) < 2)
		return ;
	prev_tail = *stack;
	while (prev_tail->next->next)
		prev_tail = prev_tail->next;
	tail = prev_tail->next;
	prev_tail->next = NULL;
	tail->next = *stack;
	*stack = tail;
}

void	rrr(t_data **stack_a, t_data **stack_b)
{
	if ((stack_size(*stack_a) < 2) || (stack_size(*stack_b) < 2))
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
