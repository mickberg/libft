/**
 * File              : ft_striteri.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		f(i, (str + i));
		++i;
	}
}
