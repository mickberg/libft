/**
 * File              : ft_strnequ.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (ft_strncmp((char*)s1, (char*)s2, len) == 0)
		return (1);
	else
		return (0);
}
