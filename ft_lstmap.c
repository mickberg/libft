#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nitem;
	t_list	*nlist;

	nitem = f(lst);
	if (nitem == NULL)
		return (NULL);
	if (lst->next == NULL)
		return nitem;
	else
	{
		nlist = ft_lstmap(lst->next, f);
		if (!nlist)
			return (NULL);
		ft_lstadd(&nlist, nitem);
		return (nlist);
	}
}
