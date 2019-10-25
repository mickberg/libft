/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:48:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:49:34 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;
	char	*d;

	dup = (char*)malloc(sizeof(char) * n + 1);
	if (!dup)
		return (NULL);
	d = dup;
	while (n-- > 0 && *str != '\0')
		*d++ = *str++;
	while (n-- > -1)
		*d++ = '\0';
	return (dup);
}
