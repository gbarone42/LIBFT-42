/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:46:14 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/05 16:46:16 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

int main()
{      char s[15] = "mamma mia";
                  
        char t[15] = "mamma mia";

	ft_memset(&s[7] , 108 , 3);
	//memset(t + 7, 108 , 3);
	memset(&t[7] , 108 , 3);
	printf("mio: %s | loro: %s", s ,t);
}
	
