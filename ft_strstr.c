/**
 * File              : ft_strstr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

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
