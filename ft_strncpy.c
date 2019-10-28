/**
 * File              : ft_strncpy.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 28.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:20:55 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:25:49 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*d;

	d = dst;
	while (len-- > 0)
	{
		*d = *src;
		if (*src != '\0')
			++src;
		++d;
	}
	return (dst);
}
