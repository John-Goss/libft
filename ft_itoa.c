/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:24:02 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/04 13:29:47 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++	;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(str) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i--] = (n % 10 + '0');
		n = n / 10;
	}
	return (str);
}
