/**
 * File              : ft_strlen.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

unsigned long	ft_strlen(char *str)
{
	unsigned long len;

	len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	return (len);
}
