/**
 * File              : ft_strtrim.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	start;
	size_t	end;
	size_t	tmp;

	start = 0;
	while ((str[start] == 32 || str[start] == 10 || str[start] == 9) && str[start] != '\0')
		++start;
	tmp = start;
	end = start;
	while (str[tmp] != '\0')
	{
		if (str[tmp] != 32 && str[tmp] != 10 && str[tmp] != 9)
			end = tmp;
		++tmp;
	}
	return (ft_strsub(str, start, end - start + 1));
}
