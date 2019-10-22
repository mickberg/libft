/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:57:34 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/22 13:43:03 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"
#include <stdlib.h>

void	test_ft_itoa(void)
{
	int failed;
	int n1 = -2147483648;
	int n2 = 0;
	int n3 = 123456;
	int n4 = -123;

	failed = 0;
	if (atoi( ft_itoa(n1)) != n1)
	{
		ft_printfail("[ft_itoa] test 1");
		ft_printdiff_str("-2147483648", ft_itoa(n1));
		++failed;
	}
	if (atoi( ft_itoa(n2)) != n2)
	{
		ft_printfail("[ft_itoa] test 2");
		ft_printdiff_str("0", ft_itoa(n2));
		++failed;
	}
	if (atoi( ft_itoa(n3)) != n3)
	{
		ft_printfail("[ft_itoa] test 3");
		ft_printdiff_str("123456", ft_itoa(n3));
		++failed;
	}
	if (atoi( ft_itoa(n4)) != n4)
	{
		ft_printfail("[ft_itoa] test 4");
		ft_printdiff_str("-123", ft_itoa(n4));
		++failed;
	}
	if (failed == 0)
		ft_printpass("[ft_itoa] 4 tests.");
}
