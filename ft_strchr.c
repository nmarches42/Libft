/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:56:43 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 09:12:40 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == ch)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if ((unsigned char)str[i] == ch)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

/*

int main() {
    const char *str = "Hello, World!";
    
    // Test della funzione ft_strchr
    char *result = ft_strchr(str, 'o');
    if (result != NULL) {
        printf("ft_strchr(str, 'o') = %s\n", result);  // "o, World!"
    } else {
        printf("Character not found.\n");
    }

    result = ft_strchr(str, 'z');
    if (result != NULL) {
        printf("ft_strchr(str, 'z') = %s\n", result);  // Character not found
    } else {
        printf("Character not found.\n");
    }

    return 0;
}

*/
