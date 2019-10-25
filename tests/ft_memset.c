/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:53:38 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 18:56:30 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_memset(void)
{
	int		failed = 0;
	char	*name = "ft_memset";

	char	*str1[10];

	failed += test_str(memset(str1, 68, 9), ft_memset(str1, 68, 9), name, "normal");
	return (failed);
}
