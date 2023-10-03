#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0, a = 0, start = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                start = 65;
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                    start = 97;
                a = argv[1][i] - start;
                while(a > 0)
                {
                  write(1, &argv[1][i], 1);
                  a--;
                }
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
