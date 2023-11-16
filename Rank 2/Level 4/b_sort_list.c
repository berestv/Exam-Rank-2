typedef struct s_list
{
	struct s_list *next;
	int data;
} t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *ptr = lst;
	int aux = 0;

	while (ptr && ptr->next)
	{
		if ((*cmp)(ptr->data, ptr->next->data))
		{
			aux = ptr->data;
			ptr->data = ptr->next->data;
			ptr->next->data = aux;
			ptr = lst;
		}
		else
			ptr = ptr->next;
	}

}
