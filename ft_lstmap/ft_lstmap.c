#include "libft.h"

void clean_list(t_list *lst)
{
	t_list *prev;

	prev = lst;
	while (lst != NULL) {
		lst = lst->next;
		free(prev);
		prev = lst;
	}
}

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new_elem;
	t_list *prev_elem;
	t_list *first;

	prev_elem = NULL;
	first = NULL;
	if (lst && f)
	{
		while(lst != NULL)
		{
			new_elem = ft_lstnew(lst->content, lst->content_size);
			if (!new_elem)
			{
				clean_list(first);
				return (NULL);
			}

			new_elem = f(new_elem);
			if (!first)
				first = new_elem;

			// if (!new_elem || new_elem->next == NULL)
			// 	return (first);

			if (!prev_elem)
				prev_elem = first;
			else 
				prev_elem->next = new_elem;	
	
			// printf("%s\n", new_elem->content);		
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}