/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:47:57 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 12:27:12 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s || d >= s + n)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/*

int main() {
    // Test della funzione ft_memmove
    char str1[] = "Hello, World!";
    char str2[] = "This will be moved!";
    
    // Memmove senza sovrapposizione
    ft_memmove(str2, str1, 5);
    str2[5] = '\0';  // Aggiungi terminatore stringa per vis corr
    printf("ft_memmove(str2, str1, 5) = %s\n", str2);  // "Hello"
    
    // Memmove con sovrapposizione
    ft_memmove(str1 + 7, str1, 5);
    printf("ft_memmove(str1 + 7, str1, 5) = %s\n", str1);  // "Hello, Hello!"
    
    return 0;
}
*/
