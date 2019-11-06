/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:06:10 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/06 19:04:16 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s++;
		if ((unsigned char)*(s - 1) == (unsigned char)c)
			return (d);
	}
	return (NULL);
}
