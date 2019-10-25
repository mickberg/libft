/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:39:07 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 17:14:25 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strndup(void)
{
	int		failed = 0;
	char	*name = "ft_strndup";

	char	*str1 = "Kalle anka";
	char	*str2 = "kalle\0anka";
	char	*str3 = "";

	failed += test_str(strndup(str1, 50), ft_strndup(str1, 50), name, "normal, fill");
	failed += test_str(strndup(str1, 11), ft_strndup(str1, 11), name, "normal?");
	failed += test_str(strndup(str3, 5), ft_strndup(str3, 5), name, "empty");
	failed += test_str(strndup(str2, 11), ft_strndup(str2, 11), name, "terminator in middle");
	return (failed);
}
