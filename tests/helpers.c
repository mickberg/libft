/**
 * File              : helpers.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 20.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#include <unistd.h>
#include <string.h>
#include "testlib.h"

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
