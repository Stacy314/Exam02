#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char seen[256] = {0}; // Array to keep track of seen characters
        int i = 0;
        while (av[1][i])
        {
            if (!seen[(unsigned char)av[1][i]])  // If character has not been printed yet
            {
                seen[(unsigned char)av[1][i]] = 1;  // Mark the character as seen
                write(1, &av[1][i], 1);  // Print the character
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            if (!seen[(unsigned char)av[2][i]])  // If character has not been printed yet
            {
                seen[(unsigned char)av[2][i]] = 1;  // Mark the character as seen
                write(1, &av[2][i], 1);  // Print the character
            }
            i++;
        }
    }
    write(1, "\n", 1);
}