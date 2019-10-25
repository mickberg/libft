/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:00:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/10/25 16:27:32 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	test_ft_strncpy(void)
{
	int		failed = 0;
	char	*name = "ft_strncpy";

	char	dst1[10] = "";
	char	*src1 = "A longer srting than destination";
	char	dst2[50];
	char	*src2 = "A shorter string than destination";

	char	ft_dst1[10] = "";
	char	*ft_src1 = "A longer srting than destination";
	char	ft_dst2[50];
	char	*ft_src2 = "A shorter string than destination";

	failed += test_str(strncpy(dst1, src1, 9), ft_strncpy(ft_dst1, ft_src1, 9), name, "src longer");
	failed += test_str(strncpy(dst2, src2, 50), ft_strncpy(ft_dst2, ft_src2, 50), name, "src shorter");
	return (failed);
}
