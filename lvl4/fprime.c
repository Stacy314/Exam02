#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	int	i = 2;
	int	number = 0;

	if (ac == 2)
	{
		number = atoi(av[1]);
		if (number == 1)
        {
			printf("1\n");
            return 0;
        }

        while(number >= i)
        {
            if (number % i == 0)
            {   
                printf("%d", i);
                if (number == i)
                    break;
                printf("*");
                number /=  i;
                i = 1;
            }
            i++;
        }
	}
	printf("\n");
}
