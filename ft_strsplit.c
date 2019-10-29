/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikaelberglund <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:07:46 by mikaelber         #+#    #+#             */
/*   Updated: 2019/10/29 17:45:32 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_concatmatch(char **matches, const char *str)
{
	char	**conc;
	char	**strings;
	size_t	len;

	if (str == NULL)
		return (NULL);
	strings = (char**)*matches;
	len = 0;
	while (matches[len] != NULL)
		++len;
	conc = (char**)malloc(sizeof(char*) * len + 2);
	if (!conc)
	{
		ft_memdel((void**)matches);
		return (NULL);
	}
	conc[len] = (char*)str;
	conc[len + 1] = NULL;
	ft_memmove(conc, matches, len);
	ft_memdel((void**)matches);
	return (conc);
}

char		**ft_strsplit(char const *str, char c)
{
	char		**strings;
	char		*match;
	size_t		start;
	size_t		end;

	start = 0;
	while (str[start] != '\0' && str[start] != c)
		++start;
	end = start;
	while (str[end] != '\0' && str[end] != c)
		++end;
	if (start == '\0')
	{
		strings = (char**)malloc(sizeof(char*));
		if (!strings)
			return (NULL);
		strings[0] = NULL;
		return (strings);
	}
	match = ft_strsub(str, start, end - start);
	if (!match)
		return (NULL);
	strings = ft_strsplit(str + end, c);
	return ft_concatmatch(strings, match);
}
