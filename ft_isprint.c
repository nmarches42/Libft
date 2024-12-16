/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:13:48 by nmarches          #+#    #+#             */
/*   Updated: 2024/10/22 15:25:16 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main()
{
	char *test1 = "HELLO";
	char *test2 = "";     // Dovrebbe restituire 0
    //char *test3 = "";          // Dovrebbe restituire 1 (stringa vuota)
    //char *test4 = "WORLD";     // Dovrebbe restituire 1
    //char *test5 = "WORLD123";  // Dovrebbe restituire 0

    printf("Test 1: %s -> %d\n", test1, ft_str_is_printable(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_printable(test2));
    //printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
    //printf("Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));
    //printf("Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5));

	return 0;
}
*/
