#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0, mid = 0, start = 0, end = 0;

    if(argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            {
                mid = 77;
                if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                    mid = 109;
                start = mid - 13;
                end = mid + 13;
                if(argv[1][i] >= mid)
                    argv[1][i] = start - (argv[1][i] - end) + 1;
                else
                    argv[1][i] = end - (argv[1][i] - start) + 1;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
