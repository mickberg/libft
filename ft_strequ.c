/**
 * File              : ft_strequ.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp((char*)s1, (char*)s2) == 0)
		return (1);
	else
		return (0);
}
