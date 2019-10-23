/**
 * File              : ft_atoi.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <stdlib.h>

int	test_ft_atoi(void)
{
	int failed = 0;
	char	*name = "ft_atoi";
	char	*n1 = "-2147483648";
	char	*n2 = "	 +2147483637";
	char	*n3 = "-kalle pelle";
	char	*n4 = "+123123123123123";

	failed += test_int(atoi(n1), ft_atoi(n1), name, "min int");
	failed += test_int(atoi(n2), ft_atoi(n2), name, "max in");
	failed += test_int(atoi(n3), ft_atoi(n3), name, "minus, no digits");
	failed += test_int(atoi(n4), ft_atoi(n4), name, "overflow");
	return (failed);
}
