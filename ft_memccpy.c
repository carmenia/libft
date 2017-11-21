/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:52:38 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 19:47:03 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*des1;
	unsigned char	*src1;

	des1 = (unsigned char *)des;
	src1 = (unsigned char *)src;
	i = 0;
	while (src1[i] && n != 0)
	{
		des1[i] = src1[i];
		if (des1[i] == (unsigned char)c)
			return (des + (i + 1));
		i++;
		n--;
	}
	return (NULL);
}
