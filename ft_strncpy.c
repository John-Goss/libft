/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:00:33 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/07 11:32:54 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src && dst)
	{
		ft_memset(dst, '\0', len);
		while (len > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			len--;
		}
	}
	return (dst);
}
