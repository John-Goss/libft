/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:53:18 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/04 18:13:13 by jle-quer         ###   ########.fr       */
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
	while (cpt < n && s1[i])
	{
		while (cpt < n && s1[i] == s2[j] && s2[j])
		{
			i++;
			j++;
			cpt++;
		}
		if (s2[j] == '\0')
			return ((char *)&(s1)[i - j]);
		i = (i - j + 1);
		j = 0;
		cpt++;
	}
	return (NULL);
}
