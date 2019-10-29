/**
 * File              : ft_strjoin.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen((char*)s1);
	s2_len = ft_strlen((char*)s2);
	joined = ft_strnew(s1_len + s2_len + 1);
	if (!joined)
		return (NULL);
	ft_memmove(joined, s1, s1_len);
	ft_memmove(joined + s1_len, s2, s2_len);
	return (joined);
}
