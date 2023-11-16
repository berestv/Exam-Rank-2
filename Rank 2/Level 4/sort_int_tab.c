void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0, aux = 0;

	while(i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}
