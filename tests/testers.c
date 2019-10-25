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

void	print_arr(int *arr, int len)
{
	int i = 0;
	while (i < len - 1)
		printf("%d, ", arr[i++]);
	printf("%d", arr[i]);
}

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

int	test_intarr(int len, int *ex, int *test, char *name, char *test_id)
{
	int failed = 0;
	if (ex != NULL && test != NULL)
	{
		int i;

		i = 0;
		while (i < len)
		{
			if (ex[i] != test[i])
				failed++;
			i++;
		}
	}

	if ((ex == NULL && test == NULL) || (ex != NULL && test != NULL && !failed))
	{
		printf("Passed [%s] [%s]\n", name, test_id);
		return (0);
	}
	else
	{
		printf("Failed [%s] [%s]\n - Expected [", name, test_id);
		if (ex != NULL)
			print_arr(ex, len);
		else
			printf("NULL");
		printf("] got [");
		if (test != NULL)
			print_arr(test, len);
		else
			printf("NULL");
		printf("]\n");
		return (1);
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
	if ((ex == NULL && test == NULL) || (ex != NULL && test != NULL && strcmp(ex, test) == 0))
	{
		printf("Passed [%s] [%s]\n", name, test_id);
		return (0);
	}
	else
	{
		if (ex == NULL)
			ex = "NULL";
		if (test == NULL)
			test = "NULL";
		printf("Failed [%s] [%s]\n - Expected [%s] got [%s]\n", name, test_id, ex, test);
		return (1);
	}
}
