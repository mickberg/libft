/**
 * File              : ft_atoi.c
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 22.10.2019
 * Last Modified Date: 28.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

int	ft_atoi(char *str)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == 48)
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*str != '\0')
	{
		if (*str > 57 || *str < 48)
			break ;
		num = (num * 10) + *str - 48;
		++str;
	}
	return (int)(num * sign);
}
