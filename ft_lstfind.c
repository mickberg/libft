/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:15:35 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/06 14:15:52 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, int (*f)(void *, size_t))
{
	if (!lst)
		return (NULL);
	if (f(lst->content, lst->content_size) != 0)
		return (lst);
	else
		return (ft_lstfind(lst->next, f));
}
