/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:32:27 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/19 18:32:48 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	y;
	size_t	k;

	j = malloc(sizeof(char) * ft_strlen(s) + 1);
	y = 0;
	k = 0;
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	while (s[y] && y < start)
	{
		y++;
	}
	while (s[y] != '\0' && (int)len > 0)
	{
		j[k] = s[y];
		y++;
		k++;
		len--;
	}
	j[k] = '\0';
	if (s[y] < j[k])
		return (NULL);
	return (j);
}

 int main()
{
	const char *s = "andppsssldffflaaa";
	printf("%s\n", ft_substr(s, 12, 2));
} 
