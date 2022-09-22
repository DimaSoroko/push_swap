/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:10:42 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/27 18:03:32 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	char content[20] = "CONTENT";
// 	t_list *result = ft_lstnew((void *)content);
// 	printf("The content is : %s", (char *)result->content);
// 	return 0;
// }

//Аллоцирует память под новый элемент и возвращает его. 
//Переменная ’content’ инициализируется значением параметра ’content’. 
//Переменная ’next’ инициализируется значением NULL.