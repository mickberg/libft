/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:06:10 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:06:16 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while ((unsigned char)*s != (unsigned char)c && n-- > 0)
	{
		*d++ = *s++;
	}
	if ((unsigned char)*s != (unsigned char)c)
		return (NULL);
	*d = *s;
	++d;
	return (d);
}
