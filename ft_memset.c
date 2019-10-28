/**
 * File              : ft_memset.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 28.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:47:40 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 19:31:54 by mberglun         ###   ########.fr       */
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
