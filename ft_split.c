/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarches <nmarches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:38:22 by adegl-in          #+#    #+#             */
/*   Updated: 2024/12/16 15:33:52 by nmarches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	words(const char *str, char del)
{
	size_t	n;
	int		beg;

	beg = 0;
	n = 0;
	while (*str)
	{
		if (*str != del && beg == 0)
		{
			beg = 1;
			n++;
		}
		else if (*str == del)
			beg = 0;
		str++;
	}
	return (n);
}
//crea una nuova stringa.
static char	*duping(const char *s, int start, int end)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	i;
	char	**ptr;
	char	**tp;
	int		index;

	index = 0;
	start = 0;
	i = 0;
	tp = (char **)malloc(sizeof(char *) * (words(s, c) + 1));
	if (!tp || !s)
		return (NULL);
	ptr = tp;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			ptr[index++] = duping(s, start, i);
	}
	ptr[index] = NULL;
	return (ptr);
}

/*int main()
{
    char str[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);
    int i = 0;
    if (!result)
        return (1);
    while (result[i])
    {
        printf("Substring %d: %s\n", i, result[i]);
        i++;
    }
    return (0);
}*/
