/**
 * File              : ft_strnstr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

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
		sublen = len;
		while (*str++ == *need++ && --sublen)
		{
			if (*need == '\0')
				return ((char*)haystack);
		}
		++haystack;
	}
	return (NULL);
}
