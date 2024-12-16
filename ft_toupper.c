/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:30:52 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/19 08:49:32 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
int main() {
    char c = 'a';
    
    char result = ft_toupper(c);  // Converte 'a' in 'A'
    printf("Uppercase of '%c' is '%c'\n", c, result);
    
    c = 'A';
    result = ft_toupper(c);  // Non cambia, 'A' rimane 'A'
    printf("Uppercase of '%c' is '%c'\n", c, result);
    
    return 0;
}
*/
