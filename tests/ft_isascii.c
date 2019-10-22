/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:27:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:28:41 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "testlib.h"

void	test_ft_isascii(void)
{
	int failed;
	char c1 = '1';
	char c2 = 'a';
	char c3 = ']';
	char c4 = '{';
	char c5 = 'Z';
	char c6 = '\n';;

	failed = 0;
	if (ft_isascii((int)c1) != 1)
	{
		ft_printfail("[ft_isascii] test 1");
		ft_printdiff_int(1, ft_isascii((int)c1));
		++failed;
	}
	if (ft_isascii((int)c2) != 1)
	{
		ft_printfail("[ft_isascii] test 2");
		ft_printdiff_int(1, ft_isascii((int)c2));
		++failed;
	}
	if (ft_isascii((int)c3) != 1)
	{
		ft_printfail("[ft_isascii] test 3");
		ft_printdiff_int(1, ft_isascii((int)c3));
		++failed;
	}
	if (ft_isascii((int)c4) != 1)
	{
		ft_printfail("[ft_isascii] test 4");
		ft_printdiff_int(1, ft_isascii((int)c4));
		++failed;
	}
	if (ft_isascii((int)c5) != 1)
	{
		ft_printfail("[ft_isascii] test 5");
		ft_printdiff_int(1, ft_isascii((int)c5));
		++failed;
	}
	if (ft_isascii((int)c6) != 1)
	{
		ft_printfail("[ft_isascii] test 1");
		ft_printdiff_int(1, ft_isascii((int)c6));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_isascii] 6 tests.");
}
