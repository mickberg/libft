/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikaelberglund <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:21:08 by mikaelber         #+#    #+#             */
/*   Updated: 2019/10/29 19:04:01 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static double	ft_powpos(double n, int exp)
{
	double	sum;

	sum = n;
	while (--exp > 0)
		sum *= n;
	return (sum);
}

static double	ft_powneg(double n, int exp)
{
	double sum;

	sum = 1;
	while (exp++ < 0)
		sum /= n;
	return (sum);
}

double			ft_pow(double n, int exp)
{
	if (exp == 0)
		return ((double)1);
	else if (exp < 0)
		return (ft_powneg(n, exp));
	else
		return (ft_powpos(n, exp));
}
