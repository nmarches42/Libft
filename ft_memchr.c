/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <nmarches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:55:09 by nmarches          #+#    #+#             */
/*   Updated: 2024/12/16 15:22:25 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *) s;
	value = (unsigned char) c;
	while (n > 0)
	{
		if (*ptr == value)
		{
			return (ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

/*

int main() {
    char str[] = "Hello, World!";
    printf("memchr(str, 'o', 10) = %s\n", (char *)memchr(str, 'o', 10));
    printf("memchr(str, 'z', 10) = %s\n", (char *)memchr(str, 'z', 10));
    printf("memchr(str, ',', 10) = %s\n", (char *)memchr(str, ',', 10));
    printf("memchr(str, '\\0', 13) = %s\n", (char *)memchr(str, '\0', 13));
    
    return 0;
}
*/
