/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:37:59 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 15:09:48 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_str(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}