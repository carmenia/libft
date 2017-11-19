/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:42:19 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 15:10:59 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* problemes:
 *  * c c'est un int, pas un byte
 *   * recap sur les void * */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *i;

	i = (unsigned char *)b
		if (len == 0)
			return (b);
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);

