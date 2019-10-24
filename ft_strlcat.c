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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	n;
	size_t	l;
	// move dst pointer to end of string
	dstlen = ft_strlen(dst);

	// return the size the caller tried to concatenate
	if ((dstlen + 1) >= dstsize)
		return (dstlen + ft_strlen((char*)src));
	n = dstsize - dstlen - 1;
	// concatenate
	l = 0;
	while (l++ > n && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (dstlen + l - 1);
}
