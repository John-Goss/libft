/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:45:51 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/11 11:24:21 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	else
	{
		while (new[i])
		{
			new[i] = '\0';
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
