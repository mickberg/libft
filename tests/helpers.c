/**
 * File              : helpers.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <unistd.h>
#include <string.h>
#include "testlib.h"
#include <stdio.h>

void	ft_putstr(char *str)
{
	write(1, str, strlen(str));
}

void	ft_printfail(char *str)
{
	ft_putstr("Test failed: ");
	ft_putstr(str);
	ft_putstr("\n");

}

void	ft_printpass(char *str)
{
	ft_putstr("Test passed! ");
	ft_putstr(str);
	ft_putstr("\n");
}

void	ft_printdiff_str(char *s1, char *s2)
{
	ft_putstr(" - Expected: [");
	ft_putstr(s1);
	ft_putstr("] got [");
	ft_putstr(s2);
	ft_putstr("]\n");
}

void	ft_printdiff_int(int n1, int n2)
{
	printf(" - Expected: [%d] got [%d].\n", n1, n2);
}
