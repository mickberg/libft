/**
 * File              : ft_itoa.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char *ft_itoa(int nb)
{
	long	num;
	int		len;
	int		i;
	char	*str;

	num = ft_abs(nb);
	len = ft_intlen(nb);
	if (nb < 0)
		++len;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (nb < 0)
		str[0] = '-';
	else if (nb == 0)
		str[0] = '0';
	i = 1;
	while (num > 0)
	{
		str[len - i] = (char)(num % 10) + '0';
		++i;
		num /= 10;
	}
	str[len] = '\0';
	return (str);
}
