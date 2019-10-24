/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:24:58 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 19:06:13 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *i;

	i = s;
	while (*i != '\0')
	{
		if ((int)*i == c)
			return ((char*)i);
		++i;
	}
	if (c == '\0')
		return ((char*)i);
	return (NULL);
}
