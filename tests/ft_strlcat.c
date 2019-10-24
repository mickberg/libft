/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:53:46 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/24 19:58:04 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strlcat(void)
{
	int		failed = 0;
	char	*name = "ft_strlcat";

	char	str1[20] = "kalle";
	char	*str2 = " pelle";

	failed += test_int(strlcat(str1, str2, 20), ft_strlcat(str1, str2, 20), name, "normal concat");
	return (failed);
}
