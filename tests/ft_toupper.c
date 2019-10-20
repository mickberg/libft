/**
 * File              : ft_toupper.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <stdio.h>
#include "testlib.h"

void	test_ft_toupper(void)
{
	int failed;
	char *str1;

	str1 = "foo bar";
	failed = 0;
	if (ft_toupper(str1[0]) != (unsigned int)('F'))
	{
		ft_printfail("[ft_toupper] pointer to F");
		++failed;
	}
	if (ft_toupper((unsigned int)('0')) != (unsigned int)('0'))
	{
		ft_printfail("[ft_toupper] 0 to 0");
		++failed;
	}
	if (ft_toupper((unsigned int)('a')) != (unsigned int)('A'))
	{
		ft_printfail("[ft_toupper] a to A");
		printf("- Expected %d, got %d", (unsigned int)('A'), (unsigned int)ft_toupper('a'));
		++failed;
	}
	if (ft_toupper((unsigned int)('\n')) != (unsigned int)('\n'))
	{
		ft_printfail("[ft_toupper] empty to empty");
		++failed;
	}
	if (!failed)
		ft_printpass("[ft_toupper] 4 tests.");
}
