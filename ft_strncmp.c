/**
 * File              : ft_strncmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - ((unsigned char)*s2));
}
