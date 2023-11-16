#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int len = 0;
	if (nbr == -2147483648)
		return("-2147483648\0");
	else if (nbr == 0)
		return("0\0");
	int n = nbr;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	char *str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
	str[len] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return str;
}
