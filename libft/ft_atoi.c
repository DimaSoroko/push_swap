/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <dsoroko@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:22:07 by dsoroko           #+#    #+#             */
/*   Updated: 2022/09/22 14:20:33 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(EXIT_FAILURE);
}

// int	ft_atoi(const char *str)
// {
// 	unsigned long long	result;
// 	int					i;
// 	int					sign;

// 	result = 0;
// 	i = 0;
// 	sign = 1;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
// 		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
// 		i++;
// 	if (str[i] == '-' && !str[i + 1])
// 		error("wrong arguments");
// 	if (str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] && str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + str[i] - '0';
// 		i++;
// 	}
// 	return (result);
// }

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((ft_isspace(str[i]) == 1))
		i++;
	if (str[i] == '-' && !str[i + 1])
		ft_exit("Error");
	while (str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	printf("%d ", ft_atoi("18446744073709551615"));
// 	printf("\n");
// 	printf("%d ", atoi("18446744073709551615"));
// 	printf("\n");
// 	printf("%d ", ft_atoi("-9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", atoi("-9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", ft_atoi(" ---+--+1234ab567"));
// 	printf("\n");
// 	printf("%d ", atoi(" ---+--+1234ab567"));
// 	printf("\n");
// 	printf("%d ", ft_atoi("-9223372036854775808"));
// 	printf("\n");
// 	printf("%d ", atoi("-9223372036854775808"));
// 	printf("\n");
// 	printf("%d ", ft_atoi("9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", atoi("9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", ft_atoi("19489384723948723948"));
// 	printf("\n");
// 	printf("%d ", atoi("19489384723948723948"));
// }
