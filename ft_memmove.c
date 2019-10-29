/**
 * File              : ft_memmove.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	char	buffer[n];
	size_t	i;

	dest = (char*)dst;
	source = (char*)src;

	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		++i;
	}

	i = 0;
	while (i < n)
		*dest++ = buffer[i++];
	return (dst);
}
