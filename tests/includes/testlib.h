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
void	test_ft_abs(void);
void	test_ft_intlen(void);
void	test_ft_itoa(void);
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_atoi(void);

void	ft_putstr(char *str);
void	ft_printfail(char *str);
void	ft_printpass(char *str);
void	ft_printdiff_str(char *s1, char *s2);
void	ft_printdiff_int(int n1, int n2);

#endif
