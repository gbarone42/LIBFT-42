/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:25:56 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/05 20:26:00 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
    char str1[] = "dajenissss";
    char str2[] = "dajenissss";
    char *ret;

    ret = ft_memmove(str1, str2 + 2, 3);
    printf("%s", ret);
    return (0);
}
*/
/*
int main(void)
{
	char str1[50];
	char str2[50] = "dajenissss";
	char *ret;

	ret = ft_memmove(str1, str2, 3);
	printf("%s", ret);
	return (0);
}*/

/* questo forse e' un main un po' meglio

int main(void)
{
    char str1[50] = "abcde";
    char str2[50] = "daj";
    char *ret;

    ret = ft_memmove(str1, str1 + 2, 5);
    printf("%s", ret);
    return (0);
}*/
