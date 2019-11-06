/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:10:33 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/06 18:13:56 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str;
	const char	*need;
	size_t		sublen;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0' && len--)
	{
		str = haystack;
		need = needle;
		sublen = len + 1;
		while (*str++ == *need++ && sublen--)
		{
			if (*need == '\0')
				return ((char*)haystack);
		}
		++haystack;
	}
	return (NULL);
}
