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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;
	size_t		y;

	s1 = (char *)dest;
	s2 = (const char *)src;
	y = 0;
	if (dest > src)
	{
		while (y < n)
		{
			s1[n - y - 1] = s2[n - y - 1];
			y++;
		}
	}
	else
	{
		ft_memcpy(s1, s2, n);
	}
	return (dest);
}
/*
forse boh e' quello di prima
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

int main(void)
{
    char str1[] = "dajenissss";
    char str2[] = "dajenissss";
    char *ret;

    ret = ft_memmove(str1, str2 + 2, 3);
    printf("%s", ret);
    return (0);
}


int main(void)
{
	char str1[50];
	char str2[50] = "dajenissss";
	char *ret;

	ret = ft_memmove(str1, str2, 3);
	printf("%s", ret);
	return (0);
}

// questo forse e' un main un po' meglio
<<<<<<< HEAD

=======
/*
>>>>>>> 2b9e459c4446ffb67045f9d04bd26a8f0659423f
int main(void)
{
    char str1[50] = "abcde";
    char str2[50] = "daj";
    char *ret;

    ret = ft_memmove(str1, str1 + 2, 5);
    printf("%s", ret);
    return (0);
<<<<<<< HEAD
}
*/
int main () 
{
=======
}*/

int main () {
>>>>>>> 2b9e459c4446ffb67045f9d04bd26a8f0659423f
   const char src[50] = "abcdefghijk";
   char dest[50] = "0123456789";
   printf("Before memmove dest = %s\n", dest);
   ft_memmove(&dest, &src, sizeof(char) * 9);
   printf("After memmove dest = %s\n", dest);
} 

