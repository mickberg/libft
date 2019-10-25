/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:21:46 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 18:23:31 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strnstr(void)
{
	int		failed = 0;
	char	*name = "ft_strnstr";

	char *hay1 = "abbabba";
	char *need1 = "bb";
	char *hay2 = "aaa";
	char *need2 = "ale";
	char *hay3 = "kalle";
	char *need3 = "";

	failed += test_str(strnstr(hay1, need1, 5), ft_strnstr(hay1, need1, 5), name, "multiple matches");
	failed += test_str(strnstr(hay2, need2, 10), strnstr(hay2, need2, 10), name, "empty haystack");
	failed += test_str(strnstr(hay3, need3, 1), ft_strnstr(hay3, need3, 1), name, "empty needle");
	failed += test_str(strnstr(hay3, need2, 3), ft_strnstr(hay3, need2, 3), name, "missmatch");
	return (failed);
}
