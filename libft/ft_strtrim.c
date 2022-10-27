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
/*
static int	ft_inset(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		l;
	int		i;
	int		s;
	int		e;

	l = ft_strlen(s1);
	i = 0;
	while (i < l && ft_inset(s1[i], set))
		i++;
	if (i == l)
		return (ft_calloc(1, 1));
	s = i;
	i = l - 1;
	while (i >= 0 && ft_inset(s1[i], set))
		i--;
	e = i;
	p = ft_calloc(l - s - (l - e) + 2, 1);
	if (!p)
		return (0);
	i = -1;
	while (s + (++i) <= e)
		p[i] = s1[s + i];
	return (p);
}
*/
int	main()
{
	const char s[] = "abcdefghi";
	const char set[] = "cde";
	printf("%s\n", ft_strtrim(s, set));
}
