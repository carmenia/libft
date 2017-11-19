/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:01:09 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 22:07:37 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* oui */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
