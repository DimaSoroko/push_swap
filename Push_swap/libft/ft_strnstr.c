/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:04:32 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/27 18:33:29 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!*needle || haystack == needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len <= len)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char *haystack = "Hello, here is the string";
// 	const char *needle = "the";
// 	char *result;

// 	result = ft_strnstr(haystack, needle, 18);
// 	printf("The substring after ft_strnstr is: %s\n", result);
// 	result = strnstr(haystack, needle, 18);
// 	printf("The substring after strnstr is: %s\n", result);
// 	return (0);
// }