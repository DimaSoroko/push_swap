/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:27:22 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 12:29:36 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_init(t_data **stack, int argc, char **argv)
{
	t_data	*new;
	int		i;

	i = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i = 1;
	while (argv[i])
	{
		new = create_node(ft_atoi(argv[i]));
		add_node_back(stack, new);
		i++;
	}
	stack_index(stack);
	if (argc == 2)
		ft_free(argv);
}

int	stack_size(t_data *head)
{
	int	stack_size;

	stack_size = 0;
	while (head)
	{
		stack_size++;
		head = head->next;
	}
	return (stack_size);
}

void	error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit (EXIT_FAILURE);
}

int	is_sorted(t_data **stack)
{
	t_data	*head;

	head = *stack;
	while (head->next)
	{
		if (head->number > head->next->number)
			return (0);
		head = head->next;
	}
	return (1);
}

// gets distance between node and searched index

int	get_node_distance(t_data **stack, int index)
{
	t_data	*head;
	int		node_distance;

	node_distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		node_distance++;
		head = head->next;
	}
	return (node_distance);
}
