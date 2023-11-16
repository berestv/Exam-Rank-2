typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !*begin_list)
		return ;

	t_list *ptr = *begin_list;
	if ((*cmp)(data_ref, ptr->data) == 0)
	{
		*begin_list = ptr->next;
		free(ptr);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	ptr = *begin_list;
	ft_list_remove_if(&ptr->next, data_ref, cmp);
}
