/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:47:29 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/20 22:21:26 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	unsigned char	*byte_ptr;
	void			*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	byte_ptr = (unsigned char *) ptr;
	total_size = nmemb * size;
	while (total_size--)
	{
		byte_ptr[total_size] = 0;
	}
	return (ptr);
}

/*

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size);

int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr) {
        for (size_t i = 0; i < nmemb; i++) {
            printf("arr[%zu] = %d\n", i, arr[i]);
        }

        free(arr);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/
