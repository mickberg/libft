/**
 * File              : testlib.h
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 23.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#ifndef FT_TESTLIB_H
# define FT_TESTLIB_H

#define MIN_INT -2147483648;
#define MAX_INT 2147483647;

#include <unistd.h>
#include "../../libft.h"

int		test_ft_strlen(void);
int		test_ft_toupper(void);
int		test_ft_tolower(void);
int		test_ft_strcmp(void);
int		test_ft_abs(void);
int		test_ft_intlen(void);
int		test_ft_itoa(void);
int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int		test_ft_atoi(void);
int		test_ft_strcat(void);

int		test_int(int ex, int test, char *name, char *test_id);
int		test_str(char *ex, char *test, char *name, char *test_id);
int		test_char(char ex, char test, char *name, char *test_id);

#endif
