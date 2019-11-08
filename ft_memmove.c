/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:07:01 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/08 21:22:29 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = (char*)dst;
	source = (char*)src;
	if (dest > source)
		while (n--)
			dest[n] = source[n];
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = source[i];
			++i;
		}
	}
	return (dst);
}
