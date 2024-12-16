/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:11:56 by nmarches          #+#    #+#             */
/*   Updated: 2024/11/22 18:41:59 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	if (start >= end)
		return (ft_substr(s1, 0, 0));
	trimmed_str = ft_substr(s1, start, end - start);
	return (trimmed_str);
}
/*
int main(void)
{
    char *result = ft_strtrim("  \t  hello world!  \t ", " \t");
    printf("Trimmed result: '%s'\n", result);
    free(result); // Non dimenticare di liberare la memoria
    return 0;
}
*/
