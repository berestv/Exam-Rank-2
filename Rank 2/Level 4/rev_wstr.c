#include <unistd.h>
int main(int argc, char *argv[])
{
	int i = 0, a = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			if ((argv[1][i] == ' ' || argv[1][i] == '\t' || !argv[1][i - 1]) && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
			{
				if (!argv[1][i - 1])
					a = i;
				else
					a = i + 1;
				while (argv[1][a] != ' ' && argv[1][a] != '\t' && argv[1][a] != '\0')
					write(1, &argv[1][a++], 1);
				if (argv[1][i - 1])
					write(1, " ", 1);
			}
			i--;
		}
	}
	write(1, "\n", 1);
}