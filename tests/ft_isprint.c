/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:27:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:55:58 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "testlib.h"

void	test_ft_isprint(void)
{
	int failed;
	char c1 = ' ';
	char c2 = 'a';
	char c3 = ']';
	char c4 = '{';
	char c5 = 'Z';
	char c6 = '~';;

	failed = 0;
	if (ft_isprint((int)c1) != 1)
	{
		ft_printfail("[ft_isprint] test 1");
		ft_printdiff_int(1, ft_isprint((int)c1));
		++failed;
	}
	if (ft_isprint((int)c2) != 1)
	{
		ft_printfail("[ft_isprint] test 2");
		ft_printdiff_int(1, ft_isprint((int)c2));
		++failed;
	}
	if (ft_isprint((int)c3) != 1)
	{
		ft_printfail("[ft_isprint] test 3");
		ft_printdiff_int(1, ft_isprint((int)c3));
		++failed;
	}
	if (ft_isprint((int)c4) != 1)
	{
		ft_printfail("[ft_isprint] test 4");
		ft_printdiff_int(1, ft_isprint((int)c4));
		++failed;
	}
	if (ft_isprint((int)c5) != 1)
	{
		ft_printfail("[ft_isprint] test 5");
		ft_printdiff_int(1, ft_isprint((int)c5));
		++failed;
	}
	if (ft_isprint((int)c6) != 1)
	{
		ft_printfail("[ft_isprint] test 1");
		ft_printdiff_int(1, ft_isprint((int)c6));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_isprint] 6 tests.");
}
