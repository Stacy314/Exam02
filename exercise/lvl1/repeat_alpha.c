#include <unistd.h>

int main (int ac, char **av)
{
    int count;
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96; // - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 64; // - 'A' + 1;
            else
                count = 1;
            while (count--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}