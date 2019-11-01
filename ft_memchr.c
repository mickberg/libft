/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:06:18 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:06:26 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	cc;
	char			*source;

	cc = (unsigned char)c;
	source = (char*)src;
	while (n--)
	{
		if (*source == c)
			return ((void*)source);
		++source;
	}
	return (NULL);
}
