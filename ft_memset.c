/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 22:46:06 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/18 22:47:10 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* problemes:
 * c c'est un int, pas un byte
 * recap sur les void * */

void	*memset(void *s, int c, size_t n)
{
	unsigned char *i;

	i = (unsigned char *)s
	if (n == 0)
		return (s);
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
