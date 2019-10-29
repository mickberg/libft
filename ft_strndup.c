/**
 * File              : ft_strndup.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
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
	size_t	strlen;

	strlen = ft_strlen((char*)str);
	if (strlen < n)
		n = strlen;
	dup = (char*)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	d = dup;
	while (*str != '\0' && n--)
		*d++ = (char)*str++;
	*d = '\0';
	return (dup);
}
