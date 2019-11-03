/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:09:58 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/03 16:14:04 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;

	mapped = ft_strnew(ft_strlen((char*)str));
	if (!mapped)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		mapped[i] = f(i, str[i]);
		++i;
	}
	return (mapped);
}
