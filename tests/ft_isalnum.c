/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:22:01 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:23:01 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

void	test_ft_isalnum(void)
{
	int failed;
	char c1 = '1';
	char c2 = 'a';
	char c3 = ']';
	char c4 = '{';
	char c5 = 'Z';
	char c6 = '\n';;

	failed = 0;
	if (ft_isalnum((int)c1) != 1)
	{
		ft_printfail("[ft_isalnum] test 1");
		ft_printdiff_int(1, ft_isalnum((int)c1));
		++failed;
	}
	if (ft_isalnum((int)c2) != 1)
	{
		ft_printfail("[ft_isalnum] test 2");
		ft_printdiff_int(1, ft_isalnum((int)c2));
		++failed;
	}
	if (ft_isalnum((int)c3) != 0)
	{
		ft_printfail("[ft_isalnum] test 3");
		ft_printdiff_int(0, ft_isalnum((int)c3));
		++failed;
	}
	if (ft_isalnum((int)c4) != 0)
	{
		ft_printfail("[ft_isalnum] test 4");
		ft_printdiff_int(0, ft_isalnum((int)c4));
		++failed;
	}
	if (ft_isalnum((int)c5) != 1)
	{
		ft_printfail("[ft_isalnum] test 5");
		ft_printdiff_int(1, ft_isalnum((int)c5));
		++failed;
	}
	if (ft_isalnum((int)c6) != 0)
	{
		ft_printfail("[ft_isalnum] test 1");
		ft_printdiff_int(0, ft_isalnum((int)c6));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_isalnum] 6 tests.");
}
