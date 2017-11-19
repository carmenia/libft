/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:56:28 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 22:51:45 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* oui
 * qu'est-ce qu'il faut retourner? &s[i] ou &str[i]?*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (unsigned char *)s;
	while (str[i])
	{
		if ((unsigned char)c == str[i])
			return (&s[i]);
		i++;
	}
	return(NULL);
}
