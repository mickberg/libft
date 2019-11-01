/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:11:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:11:08 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = ft_strnew(len + 1);
	if (!sub)
		return (NULL);
	sub[len] = '\0';
	i = 0;
	while (len--)
	{
		sub[i] = str[i + start];
		++i;
	}
	return (sub);
}

