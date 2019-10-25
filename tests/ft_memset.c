/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 19:30:52 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_memset(void)
{
	int		failed = 0;
	char	*name = "ft_memset";

	char	str1[10];
	char	str2[20];
	char	str3[5];
	str3[4] = '\0';

	char	ft_str1[10];
	char	ft_str2[20];
	char	ft_str3[5];
	ft_str3[4] = '\0';

	failed += test_str(memset(str1, 68, 9), ft_memset(ft_str1, 68, 9), name, "normal");
	failed += test_str(memset(str2, 68, 0), ft_memset(ft_str2, 68, 0), name, "nofill");
	failed += test_str(memset(str3, 'a', 5), ft_memset(ft_str3, 'a', 5), name, "fill all");

	return (failed);
}
