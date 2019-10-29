/**
 * File              : ft_memchr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	cc;
	char			*source;

	cc = (unsigned char)c;
	source = (char*)src;
	while (n--)
	{
		if (*source == c)
			return ((void*)source);
		++source;
	}
	return (NULL);
}
