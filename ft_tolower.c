/**
 * File              : ft_tolower.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
