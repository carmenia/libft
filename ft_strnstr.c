/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:42:06 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 20:40:41 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == '\0')
		return ((char *)haystack);
	while (haystack[i] || len != 0)
	{
		j = 0;
		while (haystack[i] == needle[i])
		{
			i++;
			len--;
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack - ft_strlen(needle));
		}
		i++;
		len--;
	}
	return (NULL);
}
