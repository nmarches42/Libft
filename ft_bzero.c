/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:36:07 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/20 20:53:10 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*
#include <stdio.h>
#include <stddef.h>

void bzero(void *s, size_t n);

int main() {
    char str[] = "Hello, World!";
    
    printf("Before bzero: %s\n", str);
    bzero(str, 5);
    printf("After bzero: %s\n", str); 
    return 0;
}
*/
