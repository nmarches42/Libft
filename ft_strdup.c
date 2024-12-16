/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:15 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/21 21:36:56 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	copy = malloc(i + 1);
	if (!copy)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		copy[j] = s[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
/*

int main(void) {
    const char *original = "Hello, world!";
    char *duplicate;

    // Duplica la stringa utilizzando strdup
    duplicate = strdup(original);

    // Controlla se l'allocazione è riuscita
    if (duplicate == NULL) {
        fprintf(stderr, "Errore: malloc ha fallito!\n");
        return 1;
    }

    // Stampa l'originale e la copia
    printf("Stringa originale: %s\n", original);
    printf("Stringa duplicata: %s\n", duplicate);

    // Libera la memoria allocata
    free(duplicate);

    return 0;
}

*/
