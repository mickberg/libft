/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:07:01 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/05 17:37:26 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	char	buffer[n];
	size_t	i;

	dest = (char*)dst;
	source = (char*)src;
	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		++i;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = buffer[i];
		++i;
	}
	return (dst);
}
