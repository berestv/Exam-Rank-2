#include <unistd.h>

void ft_putnbr(int i)
{
    char *str = "0123456789";
    if (i > 9)
    {
        write(1, &str[i / 10], 1);
        ft_putnbr(i % 10);
    }
    else
        write(1, &str[i], 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    char *str = NULL;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
