/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:07:59 by jle-quer          #+#    #+#             */
/*   Updated: 2015/11/30 16:32:07 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	cpt;
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	cpt = 0;
	while (cpt < n)
	{
		if (ptr_src[cpt] == c)
			return (ptr_dst + cpt + 1);
		else
		{
			ptr_dst[cpt] = ptr_src[cpt];
			cpt++;
		}
	}
	return (NULL);
}
