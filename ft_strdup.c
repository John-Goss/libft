/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:53:07 by jle-quer          #+#    #+#             */
/*   Updated: 2015/11/30 19:10:51 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof((const char *)s1) + 1);
	if (new == NULL)
		return (NULL);
	while (((char *)s1)[i])
	{
		new[i] = ((char *)s1)[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
