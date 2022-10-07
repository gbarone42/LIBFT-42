/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:06:13 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/07 16:06:23 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*)str);
}

int	main(void)
{
  int c = 'a';
	printf("%s\n", ft_strchr("saikebon", c));
	printf("%s\n", strchr("saikebon", c));
	return (0);
}
