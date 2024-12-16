/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:22:56 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:29:17 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}

/*

int main() {
    char str[50] = "Hello, World!";
    
    // Test della funzione ft_memset
    ft_memset(str, 'A', 5);
    printf("ft_memset(str, 'A', 5) = %s\n", str);  // "AAAAA, World!"
    
    return 0;
}

*/
