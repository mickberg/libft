/**
 * File              : ft_strclr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

void	ft_strclr(char *str)
{
	ft_memset(str, '\0', ft_strlen(str));
}
