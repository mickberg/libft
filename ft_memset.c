/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:07:15 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:07:20 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char			*d;
	unsigned char	cc;

	cc = (unsigned char)c;
	d = (char*)dest;
	while (len--)
	{
		*d++ = cc;
	}
	return (dest);
}
