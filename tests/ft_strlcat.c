/**
 * File              : ft_strlcat.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 24.10.2019
 * Last Modified Date: 25.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */
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
	char	str3[10] = "";
	char	*str4 = "copy this string";

	char	ft_str1[20] = "kalle";
	char	*ft_str2 = " pelle";
	char	ft_str3[10] = "";
	char	*ft_str4 = "copy this string";

	char	str5[20] = "kalle";
	char	str7[10] = "";
	char	*str8 = "copy this string";

	char	ft_str5[20] = "kalle";
	char	ft_str7[10] = "";
	char	*ft_str8 = "copy this string";


	failed += test_int(strlcat(str1, str2, 20), ft_strlcat(ft_str1, ft_str2, 20), name, "normal concat");
	failed += test_int(strlcat(str3, str4, 10), ft_strlcat(ft_str3, ft_str4, 10), name, "cutoff to empty");
	failed += test_int(strlcat(str5, str7, 20), ft_strlcat(ft_str5, ft_str7, 20), name, "src empty");
	failed += test_int(strlcat(str5, str8, 10), ft_strlcat(ft_str5, ft_str8, 10), name, "size smaller than len");
	return (failed);
}
