/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:56:28 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 20:38:53 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (c == '\0' && ft_strlen(s) < n)
		return ((void *)&s[ft_strlen(s)]);
	str = (unsigned char *)s;
	while (str[i] && i < n)
	{
		if ((unsigned char)c == str[i])
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
