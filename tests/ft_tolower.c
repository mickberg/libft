/**
 * File              : ft_tolower.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <stdio.h>
#include "testlib.h"

void	test_ft_tolower(void)
{
	int failed;
	char *str1;

	str1 = "Foo bar";
	failed = 0;
	if (ft_tolower(str1[0]) != (unsigned int)('f'))
	{
		ft_printfail("[ft_tolower] pointer to f");
		++failed;
	}
	if (ft_tolower((unsigned int)('0')) != (unsigned int)('0'))
	{
		ft_printfail("[ft_tolower] 0 to 0");
		++failed;
	}
	if (ft_tolower((unsigned int)('A')) != (unsigned int)('a'))
	{
		ft_printfail("[ft_tolower] A to a");
		printf("- Expected %d, got %d", (unsigned int)('A'), (unsigned int)ft_tolower('a'));
		++failed;
	}
	if (ft_tolower((unsigned int)('\n')) != (unsigned int)('\n'))
	{
		ft_printfail("[ft_tolower] empty to empty");
		++failed;
	}
	if (!failed)
		ft_printpass("[ft_tolower] 4 tests.");
}
