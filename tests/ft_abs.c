/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:04:04 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 13:17:43 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

void	test_ft_abs(void)
{
	int failed;

	failed = 0;
	if (ft_abs(-123) != 123)
	{
		ft_printfail("[ft_abs] test 1");
		ft_printdiff_int(123, ft_abs(-123));
		++failed;
	}
	if (ft_abs(0) != 0)
	{
		ft_printfail("[ft_abs] test 2");
		ft_printdiff_int(0, ft_abs(0));
		++failed;
	}
	if (ft_abs(1234) != 1234)
	{
		ft_printfail("[ft_abs] test 3");
		ft_printdiff_int(1234, ft_abs(1234));
		++failed;
	}
	if (ft_abs(-2147483648) != 2147483648)
	{
		ft_printfail("[ft_abs] test 4");
		ft_printdiff_int(-2147483648, ft_abs(-2147483648));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_abs] 4 tests.");
}
