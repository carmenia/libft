/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:54:14 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/20 00:06:18 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* oui 
 * est-ce qu'il faut vraiment retourner le des original?*/

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char	*des1;
	unsigned char	*src1;
	size_t			i;

	des1 = (unsigned char *)des;
	src1 = (unsigned char *)src;
	i = 0;
	if (des < src)
	{
		while (i < n)
		{
			des1[i] = src1[i];
			i++;
		}
		des1[i] = '\0';
	}
	else 
	{
		des1[n] = '\0';
		while(n-- > 0)
			des1[n] = src1[n];
	}
	return (des);
}
