/**
 * File              : ft_strlen.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <string.h>
#include "testlib.h"

int test_ft_strlen(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		failed;

	failed = 0;
	str1 = "";
	str2 = "Normal short string";
	str3 = "String with terminator \0 symbol in it?";
	str4 = &str3[10];
	if (ft_strlen(str1) != strlen(str1))
	{
		ft_printfail("[ft_strlen], empty string");
		++failed;
	}
	if (ft_strlen(str2) != strlen(str2))
	{
		ft_printfail("[ft_strlen], normal string");
		++failed;
	}
	if (ft_strlen(str3) != strlen(str3))
	{
		ft_printfail("[ft_strlen], terminator string in middle");
		++failed;
	}
	if (ft_strlen(str4) != strlen(str4))
	{
		ft_printfail("[ft_strlen], pointer to middle of string");
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_strlen], 4 tests.");

	return (failed);
}
