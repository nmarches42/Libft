/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:51:20 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 11:43:34 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	results;
	int	negative;

	results = 0;
	negative = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = (results * 10) + (str[i] - '0');
		i++;
	}
	if (negative)
		return (-results);
	else
		return (results);
}

/*
#include <stdio.h>

int ft_atoi(char *str);

int main() {
    char str1[] = "   -12345";
    char str2[] = "42";
    char str3[] = "   +5678";
    char str4[] = "   \t\n\v\f\r 123";

    printf("ft_atoi(str1) = %d\n", ft_atoi(str1));  // -12345
    printf("ft_atoi(str2) = %d\n", ft_atoi(str2));  // 42
    printf("ft_atoi(str3) = %d\n", ft_atoi(str3));  // 5678
    printf("ft_atoi(str4) = %d\n", ft_atoi(str4));  // 123

    return 0;
}
*/
