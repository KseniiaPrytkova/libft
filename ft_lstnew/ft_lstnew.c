#include "libft.h"

t_list	* ft_lstnew(void const *content, size_t content_size)
{
	t_list *list_item;

	// if ((int)content_size < 0 || content_size == 0)
	// 	return 0;
	list_item = malloc(sizeof(t_list));
	if (!list_item)
		return (NULL);
	if (content != NULL)
	{
		list_item->content = malloc(sizeof(content_size));
		if (!content)
		{
			free(list_item);
			return (NULL);
		}
		ft_memcpy(list_item->content, content, content_size);
		list_item->content_size = content_size;
		list_item->next = NULL; 
	}
	else
	{
		list_item->content = NULL;
		list_item-> content_size = 0;
	}
	return (list_item);
}