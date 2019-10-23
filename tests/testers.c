/**
 * File              : tester.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <stdio.h>
#include <string.h>

int	test_int(int ex, int test, char *name, char *test_id)
{
	if (ex != test)
	{
		printf("Failed [%s] [%s]\n - Expected [%d] got [%d]\n", name, test_id, ex, test);
		return (1);
	}
	else
	{
		printf("Passed [%s] [%s]\n", name, test_id);
		return (0);
	}
}

int	test_char(char ex, char test, char *name, char *test_id)
{
	if (ex != test)
	{
		printf("Failed [%s] [%s]\n - Expected [%c] got [%c]\n", name, test_id, ex, test);
		return (1);
	}
	else
	{
		printf("Passed [%s] [%s]\n", name, test_id);
		return (0);
	}
}

int	test_str(char *ex, char *test, char *name, char *test_id)
{
	if (strcmp(ex, test) != 0)
	{
		printf("Failed [%s] [%s]\n - Expected [%s] got [%s]\n", name, test_id, ex, test);
		return (1);
	}
	else
	{
		printf("Passed [%s] [%s]\n", name, test_id);
		return (0);
	}
}
