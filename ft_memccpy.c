/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:52:38 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/19 13:53:39 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops
 *      and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
 *
 *           The source and destination strings should not overlap, as the behavior is undefined. */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{

}
