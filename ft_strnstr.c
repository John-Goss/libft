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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	size_t	i;

	n = ft_strlen(little);
	i = 0;
	if (!big || !len)
		return (NULL);
	if (len < n)
		return (NULL);
	if (!little)
		return ((char *)big);
	while (big[i] && i <= (len - n))
	{
		if (ft_strncmp(&big[i], little, n) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
