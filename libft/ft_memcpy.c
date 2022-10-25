/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:13:45 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/11 17:13:46 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		j;
	char		*i;
	const char	*k;

	j = 0;
	i = dest;
	k = src;
	while (j < n)
	{
		i[j] = k[j];
		j++;
	}
	return (dest);
}

/*
void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t i;
	//if (!dst && !src)
	//return (0);
		i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
*/
/*
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}*/
/*
int main(void)
{
	char src[50] = "sdf";
	char dst[50] = "";
	char *ret;

	ret = ft_memcpy(dst, src, 23);
	printf("%s", dst);
	return (0);
}*/

<<<<<<< HEAD
/*
=======

>>>>>>> 2b9e459c4446ffb67045f9d04bd26a8f0659423f
 int main () {
   const char src[50] = "abcdefghijk";
   char dest[50] = "0123456789";
   printf("Before memmove dest = %s\n", dest);
   ft_memcpy(&dest, &src, sizeof(char) * 9);
   printf("After memmove dest = %s\n", dest);
<<<<<<< HEAD
} */
=======
} 
>>>>>>> 2b9e459c4446ffb67045f9d04bd26a8f0659423f
