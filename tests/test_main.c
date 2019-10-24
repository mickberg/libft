/**
 * File              : test_main.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 24.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include "testlib.h"
#include <stdio.h>

int	main(void)
{
	int failed = 0;

	failed += test_ft_strlen();
	failed += test_ft_toupper();
	failed += test_ft_tolower();
	failed += test_ft_strcmp();
	failed += test_ft_strncmp();
	failed += test_ft_abs();
	failed += test_ft_intlen();
	failed += test_ft_itoa();
	failed += test_ft_isalpha();
	failed += test_ft_isdigit();
	failed += test_ft_isalnum();
	failed += test_ft_isascii();
	failed += test_ft_isprint();
	failed += test_ft_atoi();
	failed += test_ft_strcat();
	failed += test_ft_strncat();
	failed += test_ft_strstr();
	failed += test_ft_strnstr();

	printf("\nTests returned [%d] errors.\n", failed);
	return (0);
}
