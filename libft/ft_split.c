/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:10:20 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/26 19:10:22 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	ft_countdel( const char *str, char del)
{
	int	i;
	int	countdel;

	i = 0;
	countdel = 0;
	while (str[i] != '\0')
	{
		i++;	
		if ( str[i] == del)
			countdel++;
	}
	return(countdel + 1);
}

char	*ft_newsub(char *str, char c)
{


	int	i;
	char	*unptr;

	i = 0;
	while ( str[i] != '\0' && str[i] != c)
		i++;
	unptr = malloc(sizeof(char) * (i + 1));
	ft_strlcpy(unptr, str, --i);	
	str = str + 1 + i;
	return (unptr);
}

char **ft_split(char const *s, char c)

{
	char **p;
	int i;
	int countdel;
	
	countdel = ft_countdel(s, c);
	i=0;
	p = (char **)malloc(sizeof(char*) * (countdel + 1));

	while(*s != '\0')
	{
		p[i]= ft_newsub((char*)s, c);
		i++;
		printf("lll\n");
	}
	p[i] = 0; 
	return(p);
}

int	main(void)
{	char str[]= "hry cciao";
	char **q;
	q = ft_split(str, ' ');
	int i;
	i = 0;
	while(q)
	{
		printf("%s\n", q[i]);
		i++;
	}
}
