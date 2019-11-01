/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:08:37 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:08:40 by mberglun         ###   ########.fr       */
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
