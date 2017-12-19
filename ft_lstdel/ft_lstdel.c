#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *saved;
	t_list *temp;

	if (alst != NULL && *alst != NULL && del)
	{
		saved = *alst;
		while(saved != NULL)
		{
			temp = saved;
			saved = saved->next;
			temp->next = NULL;
			ft_lstdelone(&temp, del);
		}
		*alst = NULL;
	}
}