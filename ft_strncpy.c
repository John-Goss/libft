/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:00:33 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/04 17:57:54 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	if (len > src_len)
	{
		while (dst[i])
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
