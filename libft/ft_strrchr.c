/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:54:52 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/07 17:54:56 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    const char    *first_s;

    first_s = s;
    while (*s)
        s++;
    while (s >= first_s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s--;
    }
    return (NULL);
}

int    main(void)
{
  int c = 'g';
    printf("%s\n", ft_strrchr("abcdefghilmnopqrstuvz", c));
    printf("%s\n", strrchr("abcdefghilmnopqrstuvz", c));
    return (0);
}