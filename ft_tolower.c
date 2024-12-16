/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:50:26 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:52:10 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
int main() {
    char c = 'A';
    
    char result = ft_tolower(c);  // Converte 'A' in 'a'
    printf("Lowercase of '%c' is '%c'\n", c, result);
    
    c = 'a';
    result = ft_tolower(c);  // Non cambia, 'a' rimane 'a'
    printf("Lowercase of '%c' is '%c'\n", c, result);
    
    return 0;
}
*/
