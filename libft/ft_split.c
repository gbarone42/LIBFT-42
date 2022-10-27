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

char **ft_split(char const *s, char c)

{
char **p //nuovo  puntatotre
 int i
 i=0
 p= malloc(sizeof(char) + 1;
 j=0
 
 while ( s[i] != "\0")
 {
	 while (s[i] == c )
 	{
 		i++
 	}	
 
 		while( s[i]!= c  && s[i] != "\0")
		{
			s[i] = p[i]
			
			i++
	
		}

 } 
	
		return(p)






}
