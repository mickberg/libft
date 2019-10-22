/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:07:26 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 13:21:03 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

void	test_ft_intlen(void)
{
	int failed;

	failed = 0;
	if (ft_intlen(0) != 1)
	{
		ft_printfail("[ft_intlen] test 1");
		ft_printdiff_int(1, ft_intlen(0));
		++failed;;
	}
	if (ft_intlen(2147483647) != 10)
	{
		ft_printfail("[ft_intlen] test 2");
		ft_printdiff_int(10, ft_intlen(2147483647));
		++failed;;
	}
	if (ft_intlen(-123) != 3)
	{
		ft_printfail("[ft_intlen] test 3");
		ft_printdiff_int(3, ft_intlen(-123));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_intlen] 3 tests.");

}
