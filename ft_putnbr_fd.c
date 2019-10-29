/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikaelberglund <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:58:21 by mikaelber         #+#    #+#             */
/*   Updated: 2019/10/29 19:28:24 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int		exp;
	int		len;

	num = ft_abs(n);
	len = ft_intlen(num);
	if (n < 0)
		ft_putchar_fd('-', fd);
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}

	exp = (int)ft_pow(10, len - 1);
	while (exp > 0)
	{
		ft_putchar_fd((char)((num / exp) + 48), fd);
		num = num % exp;
		exp /= 10;
	}
}
