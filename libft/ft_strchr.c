/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:32:06 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/27 18:33:29 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char str[] = "Hello123";
// 	const char ch = 'o';
// 	char *result;
// 	char *result2;
// 	result = ft_strchr(str, ch);
// 	result2 = strchr(str, ch);
// 	printf("String after a character is: %s\n", result);
// 	printf("String after a character is: %s\n", result2);
// 	return (0);
// }
//Функция strchr ищет первое вхождения символа, 
//код которого указан в аргументе c, 
//в строке, на которую указывает аргумент s.