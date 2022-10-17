/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:41:51 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/14 16:41:58 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	check_first(char const *s1, char const *set)
{
	size_t	res;
	size_t	i;
	size_t	j;

	res = 0;
	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			res++;
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (res);
}

size_t	check_last(char const *s1, char const *set)
{
	size_t	res;
	size_t	i;
	size_t	j;

	res = ft_strlen(s1);
	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			res--;
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	first;
	size_t	last;
	size_t	i;

	i = 0;
	first = check_first(s1, set);
	last = check_last(s1, set);
	trims = (char *)malloc(last - first + 1);
	if (!trims)
		return (NULL);
	while (first < last)
	{
		trims[i] = s1[first];
		i++;
		first++;
	}
	trims[i] = '\0';
	return (trims);
}

/*		
**int                    main(void)
**{
**    ft_putendl_fd(ft_strtrim("lorem ipsum dolor sit am", "oa"), 1);
**    return (0);
**}
*/
