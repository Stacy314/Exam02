#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i; 
        int j;
        unsigned char seen[256] = {0};

        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    if(!seen[(unsigned char)av[1][i]])
                    {
                        write(1, &av[1][i], 1);
                        seen[(unsigned char)av[1][i]] = 1;
                    }
                }
                j++;
            }
            i++;
        }
        

    }
    write(1, "\n", 1);
}