/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 16:55:19 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 16:55:24 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *i;
	const char *match;

	match = NULL;
	i = s;
	while (*i != '\0')
	{
		if ((int)*i == c)
			match = i;
		++i;
	}
	if (c == '\0')
		return ((char*)i);
	return ((char*)match);
}
