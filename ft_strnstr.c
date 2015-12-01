/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:53:18 by jle-quer          #+#    #+#             */
/*   Updated: 2015/11/30 16:46:17 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	size_t	cpt;

	i = 0;
	j = 0;
	cpt = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] && cpt < n)
	{
		while (s1[i] == s2[j] && s2[j] != '\0' && cpt < n)
		{
			i++;
			j++;
			cpt++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
		i = (i - j + 1);
		j = 0;
		cpt++;
	}
	return (NULL);
}
