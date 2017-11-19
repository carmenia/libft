/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:20:55 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 15:25:59 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* oui */

#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	while (j < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
