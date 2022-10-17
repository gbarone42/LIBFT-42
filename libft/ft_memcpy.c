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

void	*ft_memcpy(void *dst, const void *src, size_t n)
/*
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
uguale a?*/
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
}
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
