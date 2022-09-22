/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 09:05:22 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/27 18:33:29 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= destlen)
		return (dstsize + srclen);
	while (src[i] && destlen + i + 1 < dstsize)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = 0;
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[50] = "String1";
// 	char s2[50] = "String2";
// 	size_t dest;
// 	size_t dest2;

// 	dest = ft_strlcat(s1, s2, 15);
// 	dest2 = strlcat(s1, s2, 15);
// 	printf("Final string : %s\n", s1);
// 	printf("dest after ft_strlcat : %zu\n", dest);
// 	printf("dest after strlcat : %zu\n", dest2);
// 	return (0);
// }