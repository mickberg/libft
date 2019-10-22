/**
 * File              : ft_itoa.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <stdlib.h>

char *ft_itoa(int nb)
{
	char			*str;
	unsigned int	len;
	long			num;
	int				i;

	num = nb;
	len = 0;
	i = num;
	if (num < 0)
	{
		num *= -1;
		++len;
	}
	else if (num == 0)
		len = 1;
	while (i > 0)
	{
		i /= 10;
		len++;
	}

	str = (char*)malloc(sizeof(char) * len+1);
}
