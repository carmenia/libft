/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizefd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:40:17 by carmenia          #+#    #+#             */
/*   Updated: 2018/01/15 12:41:52 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sizefd(char *file)
{
	int		size;
	int		fd;
	char	*buf;

	size = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error\n");
		return (1);
	}
	if (!(buf = (char *)malloc(sizeof(*buf) * 1)))
		return (1);
	while (read(fd, buf, 1))
		size++;
	if (close(fd) == -1)
	{
		ft_putstr("error\n");
		return (1);
	}
	return (size);
}
