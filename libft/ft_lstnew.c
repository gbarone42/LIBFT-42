/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:38:35 by gbarone           #+#    #+#             */
/*   Updated: 2022/10/25 13:45:10 by gbarone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}
/*{	
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}
*/
