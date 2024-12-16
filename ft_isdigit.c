/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:24:51 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:28:13 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Test della funzione ft_isdigit
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));  // 1
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));  // 1
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));  // 0
    printf("ft_isdigit('@') = %d\n", ft_isdigit('@'));  // 0

    return 0;
}

*/
