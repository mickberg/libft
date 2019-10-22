/**
 * File              : ft_atoi.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <stdlib.h>

void	test_ft_atoi(void)
{
	int failed;
	char	*n1 = "-2147483648";
	char	*n2 = "	 +2147483637";
	char	*n3 = "-kalle pelle";
	char	*n4 = "+123123123123123";

	failed = 0;
	if (ft_atoi(n1) != atoi(n1))
	{
		ft_printfail("[ft_atoi] test 1");
		ft_printdiff_int(atoi(n1), ft_atoi(n1));
		++failed;
	}
	if (ft_atoi(n2) != atoi(n2))
	{
		ft_printfail("[ft_atoi] test 2");
		ft_printdiff_int(atoi(n2), ft_atoi(n2));
		++failed;
	}
	if (ft_atoi(n3) != atoi(n3))
	{
		ft_printfail("[ft_atoi] test 3");
		ft_printdiff_int(atoi(n3), ft_atoi(n3));
		++failed;
	}
	if (ft_atoi(n4) != atoi(n4))
	{
		ft_printfail("[ft_atoi] test 4");
		ft_printdiff_int(atoi(n4), ft_atoi(n4));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_atoi] 4 tests.");
}
