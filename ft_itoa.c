/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:04:49 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/11 17:42:26 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int nb)
{
	long	num;
	int		len;
	int		i;
	char	*str;

	num = ft_abs(nb);
	len = ft_intlen(nb);
	if (nb < 0)
		++len;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nb < 0)
		str[0] = '-';
	else if (nb == 0)
		str[0] = '0';
	i = 1;
	while (num > 0)
	{
		str[len - i] = (char)(num % 10) + '0';
		++i;
		num /= 10;
	}
	str[len] = '\0';
	return (str);
}
