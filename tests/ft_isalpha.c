/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:00:15 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:09:03 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

void	test_ft_isalpha(void)
{
	int failed;
	char c1 = '1';
	char c2 = 'a';
	char c3 = 'z';
	char c4 = 'A';
	char c5 = 'Z';
	char c6 = '\n';;

	failed = 0;
	if (ft_isalpha((int)c1) != 0)
	{
		ft_printfail("[ft_isalpha] test 1");
		ft_printdiff_int(0, ft_isalpha((int)c1));
		++failed;
	}
	if (ft_isalpha((int)c2) != 1)
	{
		ft_printfail("[ft_isalpha] test 2");
		ft_printdiff_int(1, ft_isalpha((int)c2));
		++failed;
	}
	if (ft_isalpha((int)c3) != 1)
	{
		ft_printfail("[ft_isalpha] test 3");
		ft_printdiff_int(1, ft_isalpha((int)c3));
		++failed;
	}
	if (ft_isalpha((int)c4) != 1)
	{
		ft_printfail("[ft_isalpha] test 4");
		ft_printdiff_int(1, ft_isalpha((int)c4));
		++failed;
	}
	if (ft_isalpha((int)c5) != 1)
	{
		ft_printfail("[ft_isalpha] test 5");
		ft_printdiff_int(1, ft_isalpha((int)c5));
		++failed;
	}
	if (ft_isalpha((int)c6) != 0)
	{
		ft_printfail("[ft_isalpha] test 1");
		ft_printdiff_int(0, ft_isalpha((int)c6));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_isalpha] 6 tests.");
}
