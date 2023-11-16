#include "ft_list.h"
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *list = lst;
	int aux;

	while (list->next)
	{
		if (((*cmp)(list->data, list->next->data)) == 0)
		{
			aux = list->data;
			list->data = list->next->data;
			list->next->data = aux;
			lst = list;
		}
		else
			list = list->next;
	}
	lst = list;
	return (lst);
}
