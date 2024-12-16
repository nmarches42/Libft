/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:23:26 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:28:55 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main() {

    printf("ft_isascii('A') = %d\n", ft_isascii('A'));  // 1
    printf("ft_isascii('z') = %d\n", ft_isascii('z'));  // 1
    printf("ft_isascii('€') = %d\n", ft_isascii('€'));  // 0
    printf("ft_isascii(128) = %d\n", ft_isascii(128));  // 0

    return 0;
}
*/
