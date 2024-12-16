/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <nmarches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:38:09 by nmarches          #+#    #+#             */
/*   Updated: 2024/12/16 15:23:13 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hellz";
    char str3[] = "Hello";
    
    // Confronta i primi 5 caratteri
    printf("ft_memcmp(str1, str2, 5) = %d\n", ft_memcmp(str1, str2, 5));
    
    // Confronta i primi 5 caratteri (uguali)
    printf("ft_memcmp(str1, str3, 5) = %d\n", ft_memcmp(str1, str3, 5));
    
    // Confronta i primi 3 caratteri
    printf("ft_memcmp(str1, str3, 3) = %d\n", ft_memcmp(str1, str3, 3)); 
    // Confronta 0 caratteri (risultato dovrebbe essere 0)
    printf("ft_memcmp(str1, str2, 0) = %d\n", ft_memcmp(str1, str2, 0));
    
    return 0;
}
*/
