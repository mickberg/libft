/**
 * File              : ft_strlcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:25:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 20:00:07 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	n;
	size_t	l;
	size_t	srclen;

	// move dst pointer to end of string
	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char*)src);
	dst += dstlen;

	// return the size the caller tried to concatenate
	if (dstlen >= dstsize)
		return (dstsize + srclen);

	n = dstsize - dstlen - 1;
	// concatenate
	l = 0;
	while (l++ < n && *src != '\0')
	{
		*dst = *src;
		++dst;
		++src;
	}
	*dst = '\0';
	return (dstlen + srclen);
}
