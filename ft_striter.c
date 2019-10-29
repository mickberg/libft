/**
 * File              : ft_striter.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

void	ft_striter(char *str, void (*f)(char*))
{
	while (*str != '\0')
		f(str++);
}
