/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:10:08 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/01 20:10:10 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - ((unsigned char)*s2));
}
