#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *elem))
{
	if (lst == NULL)
		return ;
	f(lst);
	ft_lstiter(lst->next, f);
}
