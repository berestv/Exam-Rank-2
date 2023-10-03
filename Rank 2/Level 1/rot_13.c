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
                start = 64;
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                    start = 96;
                a = (argv[1][i] - start) + 13;
                if(a > 26)
                    a -= 26;
                argv[1][i] = a + start;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
