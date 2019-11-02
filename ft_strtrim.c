/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:11:12 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/02 17:00:17 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	start;
	size_t	end;
	size_t	tmp;

	start = 0;
	while ((str[start] == 32 || str[start] == 10 ||
		str[start] == 9) && str[start] != '\0')
	{
		++start;
	}
	tmp = start;
	end = start;
	while (str[tmp] != '\0')
	{
		if (str[tmp] != 32 && str[tmp] != 10 && str[tmp] != 9)
			end = tmp;
		++tmp;
	}
	return (ft_strsub(str, start, end - start + 1));
}
