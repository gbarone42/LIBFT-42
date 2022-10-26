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
