/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <nmarches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:06:01 by nmarches          #+#    #+#             */
/*   Updated: 2024/12/16 15:56:57 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

/*

int main() {
    char str[] = "Hello, World!";
    char c = 'o';
    
    char *result = strrchr(str, c);  // Cerca l'ultima occorrenza di 'o'
    if (result) {
        printf("Found last occurrence of '%c': %s\n", c, result);
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}

*/
