/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:44:30 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/20 20:52:21 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	while (src[j])
	{
		j++;
	}
	if (i == size)
	{
		return (size + j);
	}
	while (i + k + 1 < size && src[k])
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}

/*
#include <stdio.h>

int main() {
    char dst[20] = "Hello, ";
    const char *src = "World!";
    size_t size = 20;
    
    // Test della funzione strlcat
    size_t result = strlcat(dst, src, size);
    printf("strlcat(dst, src, size) = %zu\n", result);  // Dovrebbe stampare 13
    printf("dst after strlcat: %s\n", dst);  // Dovrebbe stampare "Hello, World!"
    
    return 0;
}

*/
