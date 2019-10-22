/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:13:15 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 14:17:33 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

void	test_ft_isdigit(void)
{
	int failed;

	failed = 0;
	if (ft_isdigit('0') != 1)
	{
		ft_printfail("[ft_isdigit] test 1");
		ft_printdiff_int(1, ft_isdigit('0'));
		++failed;
	}
	if (ft_isdigit('9') != 1)
	{
		ft_printfail("[ft_isdigit] test 2");
		ft_printdiff_int(1, ft_isdigit('9'));
		++failed;
	}
	if (ft_isdigit('a') != 0)
	{
		ft_printfail("[ft_isdigit] test 3");
		ft_printdiff_int(0, ft_isdigit('a'));
		++failed;
	}
	if (ft_isdigit('\0') != 0)
	{
		ft_printfail("[ft_isdigit] test 4");
		ft_printdiff_int(0, ft_isdigit('\0'));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_isdiigit] test 5");
}
