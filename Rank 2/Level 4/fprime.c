#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int n, i = 1;

	if (argc == 2)
	{
		n = atoi(argv[1]);

		if (n == 1)
			printf("1");
		while (n >= ++i)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n == i)
					break;
				printf("*");
				n /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return 0;
}
