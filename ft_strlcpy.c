/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:00:20 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 11:45:37 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	lenght = 0;
	i = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght);
}

/*

int main() {
    char src[] = "Hello, World!";
    char dest[20];
    size_t size = 10;

    unsigned int result = ft_strlcpy(dest, src, size);
    printf("ft_strlcpy(dest, src, size) = %u\n", result);  // 13
    printf("dest after ft_strlcpy: %s\n", dest);  // "Hello, Worl"
    
    return 0;
}

*/
