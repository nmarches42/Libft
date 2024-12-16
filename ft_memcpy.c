/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:24:05 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 12:24:52 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	d = (char *) dest;
	s = (const char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main() {
    // Test della funzione ft_memcpy
    char src[] = "Hello, World!";
    char dest[20];
    
    // Copia i primi 5 caratteri
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';  // Aggiungi terminatore stringa per vis corr
    printf("ft_memcpy(dest, src, 5) = %s\n", dest);  // "Hello"
    
    // Copia tutti i caratteri, inclusi lo spazio e la punteggiatura
    ft_memcpy(dest, src, 13);
    printf("ft_memcpy(dest, src, 13) = %s\n", dest);  // "Hello, World!"
    
    return 0;
*/
