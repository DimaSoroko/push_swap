/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:40:46 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 10:53:51 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// create a new node 

t_data	*create_node(int number)
{
	t_data	*new_node;

	new_node = malloc(sizeof(t_data));
	if (!new_node)
		return (NULL);
	new_node -> number = number;
	new_node -> index = -1;
	new_node -> next = NULL;
	return (new_node);
}

// gets the last node from the list

t_data	*get_last(t_data *head)
{
	if (!head)
		return (NULL);
	while (head -> next)
		head = head -> next;
	return (head);
}

// adds node in a front of the list

void	add_node_front(t_data **stack, t_data *new_node)
{
	if (!new_node)
		return ;
	new_node -> next = *stack;
	*stack = new_node;
}

// adds node in a back  of the list

void	add_node_back(t_data **stack, t_data *new_node)
{
	t_data	*temp;

	if (!new_node)
		return ;
	if (*stack)
	{
		temp = get_last(*stack);
		temp -> next = new_node;
	}
	else
		*stack = new_node;
}
