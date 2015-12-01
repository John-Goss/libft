/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:31:43 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/01 18:00:55 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (str[i] != '+' || str[i] != '-' || str[i] < '0' || str[i] > '9')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i] < '0' || str[i] > '9')
			return (0);
		if (str[i - 1] == '-')
			write(1, "-", 1);
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}
