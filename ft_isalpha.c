/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:00:37 by nmarches          #+#    #+#             */
/*   Updated: 2024/10/22 13:36:27 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_isalpha(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main() {
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));  // 1
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));  // 1
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));  // 0
    printf("ft_isalpha('@') = %d\n", ft_isalpha('@'));  // 0

    return 0;
}
*/
