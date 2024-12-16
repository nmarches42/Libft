/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:46:49 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/25 14:46:53 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/*
static char	my_func(unsigned int index, char c)
{
	return (index + c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*new_str;

	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len] != '\0')
	{
		len++;
	}
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*

int main() {
    char *s = "abcdef";
    // Usa ft_strmapi con la funzione uppercase_if_even
    char *result = ft_strmapi(s, uppercase_if_even);

    if (result) {
        printf("Risultato: %s\n", result);  // Stampa la stringa trasformata
        free(result);  // Libera la memoria
    } else {
        printf("Errore nell'allocazione della memoria\n");
    }

    return 0;
}
*/
