#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0, w = 0, trig = 0;

	if (argc >= 2)
	{
		while (argv[1][i] != '\0' && (argv[1][i] == '\t' || argv[1][i] == ' '))
			i++;
		w = i;
		while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i - 1] != '\t' && argv[1][i - 1] != ' ' && trig != 0)
				write(1, " ", 1);
			if (argv[1][i] != '\0')
				i++;
			trig = 1;
		}
		while (argv[1][w] && argv[1][w] != '\t' && argv[1][w] != ' ')
		{
			write(1, &argv[1][w], 1);
			w++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
