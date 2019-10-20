/**
 * File              : ft_toupper.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

unsigned int	ft_toupper(unsigned int c)
{
	if (c >= 97 && c <= 122)
		return (unsigned int)(c - 32);
	return (c);
}
