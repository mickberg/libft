/**
 * File              : ft_strcmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <string.h>
#include "testlib.h"

void	test_ft_strcmp(void)
{
	int failed;
	char *s1_1 = "kalle Pelle";
	char *s1_2 = "kalle pelle";
	char *s2 = "kalle\0kalle";
	char *s3 = "THis be a test string";
	char *str_p = s3;

	failed = 0;
	if (ft_strcmp(s1_1, s1_2) != strcmp(s1_1, s1_2))
	{
		ft_printfail("[ft_strcmp] test 1");
		++failed;
	}
	if (ft_strcmp(s2, s2) != strcmp(s2, s2))
	{
		ft_printfail("[ft_strcmp] test 2");
		++failed;
	}
	if (ft_strcmp(str_p, s3) != strcmp(str_p, s3))
	{
		ft_printfail("[ft_strcmp] test 2");
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_strcmp] 3 tests.");
}
