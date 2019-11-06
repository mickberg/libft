/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:10:17 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/06 14:00:04 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*dup;
	char	*d;
	size_t	strlen;

	strlen = ft_strlen((char*)str);
	if (strlen < len)
		len = strlen;
	dup = (char*)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	d = dup;
	while (*str != '\0' && len--)
		*d++ = (char)*str++;
	*d = '\0';
	return (dup);
}
