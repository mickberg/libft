/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:10:22 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/11 17:51:44 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (ft_strncmp((char*)s1, (char*)s2, len) == 0)
		return (1);
	else
		return (0);
}
