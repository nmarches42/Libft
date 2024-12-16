/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:56:54 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/22 16:19:08 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char *str = "Ciao, mondo!";
    char *substr;

    substr = ft_substr(str, 6, 5);
    printf("Sottostringa: %s\n", substr); // Output: "mondo"
    free(substr);

    substr = ft_substr(str, 0, 4);
    printf("Sottostringa: %s\n", substr); // Output: "Ciao"
    free(substr);

    substr = ft_substr(str, 20, 5);
    printf("Sottostringa: %s\n", substr); // Output: ""
    free(substr);

    substr = ft_substr(str, 3, 50);
    printf("Sottostringa: %s\n", substr); // Output: "o, mondo!"
    free(substr);

    return 0;
}
*/
