/**
 * File              : ft_strmap.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 29.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char			*mapped;
	unsigned int	i;

	mapped = (char*)malloc(sizeof(char) * ft_strlen((char*)str) + 1);
	if (!mapped)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		mapped[i] = f(str[i]);
		++i;
	}
	mapped[i] = '\0';
	return (mapped);
}
