/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
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

=======
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
>>>>>>> 9b92e5916cea3eeee42ed74c2c0bde5504701518
