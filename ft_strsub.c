/**
 * File              : ft_strsub.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

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

