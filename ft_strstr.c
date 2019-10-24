/**
 * File              : ft_strstr.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*haystack != *needle)
		return (NULL);
	else
	{
		return (ft_strstr(haystack + 1, needle + 1));
	}
}
