/**
 * File              : ft_strcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

char	*ft_strcat(char *s1, char *s2)
{
	char *s1_tmp;

	s1_tmp = s1;
	while (*s1_tmp != '\0')
		++s1_tmp;
	while (*s2 != '\0')
	{
		*s1_tmp = *s2;
		++s1_tmp;
		++s2;
	}
	*s1_tmp = '\0';
	return s1;
}
