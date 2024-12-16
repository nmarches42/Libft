/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:02:16 by nmarches          #+#    #+#             */
/*   Updated: 2024/10/28 16:37:40 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}

/*

int main() {
    char str[] = "Hello, World!";
    char to_find[] = "World";
    
    char *result = ft_strnstr(str, to_find, 10);  // Cerca "World" nei p 10 c
    if (result) {
        printf("Found substring: %s\n", result);  // Dovrebbe stampare "World!"
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}

*/
