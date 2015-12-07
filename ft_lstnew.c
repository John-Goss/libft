/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:46:02 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/07 15:57:38 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (content == NULL)
	{
		new = ft_memalloc(0);
		new->content = NULL;
	}
	else
	{
		new = ft_memalloc(content_size);
		new->content = (void *)content;
	}
	new->next = NULL;
	return (new);
}
