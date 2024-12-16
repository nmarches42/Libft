/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:24:09 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:27:33 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*

#include <stdio.h>

int ft_isalnum(int c);

int main() {
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));  // 1
    printf("ft_isalnum('z') = %d\n", ft_isalnum('z'));  // 1
    printf("ft_isalnum('9') = %d\n", ft_isalnum('9'));  // 1
    printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));  // 0

    return 0;
}
*/
