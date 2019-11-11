/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:06:18 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/11 16:35:46 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*source;

	cc = (unsigned char)c;
	source = (unsigned char*)src;
	while (n--)
	{
		if (*source == cc)
			return ((void*)source);
		++source;
	}
	return (NULL);
}
