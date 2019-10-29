/**
 * File              : ft_strdup.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:34:32 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:41:34 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	char	*d;
	size_t	len;

	len = ft_strlen((char*)str);
	dup = (char*)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	d = dup;
	while (*str != '\0')
		*d++ = *str++;
	*d = '\0';
	return (dup);
}
