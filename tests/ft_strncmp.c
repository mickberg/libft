/**
 * File              : ft_strncmp.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <string.h>
#include "testlib.h"

int	test_ft_strncmp(void)
{
	int failed = 0;
	char *name = "ft_strncmp";

	char *s1_1 = "kalle Pelle";
	char *s1_2 = "kalle pelle";
	char *s2 = "kalle\0kalle";
	char *s3 = "THis be a test string";
	char *str_p = s3;

	failed += test_int(strncmp(s1_1, s1_2, strlen(s1_2)),
		ft_strncmp(s1_1, s1_2, strlen(s1_2)), name, "case sensitivity");
	failed += test_int(strncmp(s2, s2, 10), ft_strncmp(s2, s2, 10), name, "terminator in middle");
	failed += test_int(strncmp(s3, s3, 0), ft_strncmp(s3, s3, 0), name, "0 length");
	failed += test_int(strncmp(str_p, s3, strlen(str_p)), ft_strncmp(str_p, s3, strlen(str_p)), name, "pointer to str");
	return (failed);
}
