/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:40:01 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/09 10:45:48 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*a;
	char	*b;
	char	*s;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	a = (char *)s1;
	b = (char *)s2;
	i = ft_strlen(a);
	j = ft_strlen(b);
	s = malloc((i + j + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (a[i])
	{
		s[i] = a[i];
		i++;
	}
	while (b[j])
		s[i++] = b[j++];
	s[i] = '\0';
	return (s);
}

/*#include<string.h>
int main()
{
    char *a = "abc";
	char *b = NULL;
	printf("%s",ft_strjoin(a, b));
    return 0;
}*/