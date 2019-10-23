/**
 * File              : ft_strcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <string.h>

int	test_ft_strcat(void)
{
	int		failed = 0;
	char	*name = "ft_strcat";

	char	str1[40] = "Leading string";
	char	*str2 = ", trailing";

	failed += test_str(strcat(str1, str2), ft_strcat(str1, str2), name, "simple test");
	return (failed);
}
