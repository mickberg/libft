#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*item;
	void	*cpy;

	item = (t_list*)malloc(sizeof(t_list));
	if (!item)
		return (NULL);

	if (content == NULL)
	{
		item->content = NULL;
		item->content_size = 0;
	}
	else
	{
		cpy = ft_memalloc(content_size);
		item->content = ft_memcpy(cpy, content, content_size);
		item->content_size = content_size;
	}
	item->next = NULL;
	return (item);
}
