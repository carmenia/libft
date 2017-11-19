/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:49:01 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 15:15:00 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* oui */

#include "libft.h"

char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (des);
}
