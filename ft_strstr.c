/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:11:03 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:11:05 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*str;
	const char	*need;

	if (*needle == '\0')
		return ((char*)haystack);

	while (*haystack != '\0')
	{
		str = haystack;
		need = needle;
		while (*str++ == *need++)
		{
			if (*need == '\0')
				return ((char*)haystack);
		}
		++haystack;
	}
	return (NULL);
}
