/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:46:34 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/25 14:46:38 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
static void	f(unsigned int index, char *c)
{
	(void) index;
	*c = *c + 1;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main()
{
    char str[] = "abcd";  // La stringa originale
    printf("Originale: %s\n", str);

    ft_striteri(str, f);  // Applica my_func a ogni carattere

    printf("Modificata: %s\n", str);  // La stringa modificata sarà "bcde"
    return 0;
}**/
