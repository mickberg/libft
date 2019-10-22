/**
 * File              : testlib.h
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#ifndef FT_TESTLIB_H
# define FT_TESTLIB_H

#include <unistd.h>
#include "../../libft.h"

int		test_ft_strlen(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_strcmp(void);

void	ft_putstr(char *str);
void	ft_printfail(char *str);
void	ft_printpass(char *str);
void	ft_printdiff_str(char *s1, char *s2);

#endif
