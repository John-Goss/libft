/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:53:18 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/14 15:06:43 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;
	size_t	i;

	n = ft_strlen(s2);
	i = 0;
	if (len < n)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	while (s1[i] && i <= (len - n))
	{
		if (ft_strncmp(&s1[i], s2, n) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
