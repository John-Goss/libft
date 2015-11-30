/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:22:27 by jle-quer          #+#    #+#             */
/*   Updated: 2015/11/30 15:04:32 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cpt;

	cpt = 0;
	if (!n)
		return (0);
	n--;
	while ((s1[cpt] || s2[cpt]) && s1[cpt] == s2[cpt] && cpt < n)
		cpt++;
	return (s1[cpt] - s2[cpt]);
}
