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
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	y;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	y = ft_strlen(s1);
	while (y && ft_strchr(set, s1[y]))
		y--;
	return (ft_substr(s1, 0, y + 1));
}
*/

static int	start(char *str1, const char *set, int i, int l)
{
	while (set[l] != '\0')
	{
		if (str1[i] == set[l])
		{
			i++;
			l = 0;
		}
		else
			l++;
	}
	return (i);
}

static int	finish(char *str1, const char *set, int l, int j)
{
	j = ft_strlen((char *)str1);
	l = 0;
	while (set[l] != '\0')
	{
		if (str1[j - 1] == set[l])
		{
			j--;
			l = 0;
		}
		else
			l++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*str1;
	int		i;
	int		j;
	int		k;

	str1 = (char *)s1;
	k = 0;
	i = 0;
	j = ft_strlen((char *)s1);
	trim = malloc(sizeof(char) * (j + 1));
	if (!trim)
		return (NULL);
	i = start(str1, set, i, 0);
	j = finish(str1, set, j, 0);
	while (i < j)
	{
		trim[k] = str1[i];
		i++;
		k++;
	}
	trim[k] = '\0';
	return (trim);
}
/* questa e'quella di prima
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
*/
/*		
**int                    main(void)
**{
**    ft_putendl_fd(ft_strtrim("lorem ipsum dolor sit am", "oa"), 1);
**    return (0);
**}
*/
