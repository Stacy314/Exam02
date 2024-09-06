#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
	int start_of_word = 0;
	int end_of_word = 0;
	int  flag;
		
	if(argc == 2)
	{   

		while(argv[1][i])
			i++;
		while(i >= 0)
		{
		 	while( argv[1][i] <= 32)
		 		i--;
            end_of_word = i;
            while(argv[1][i] > 32)
	    		i--;
            start_of_word = i + 1;
			 	flag = start_of_word;
		    while(start_of_word <= end_of_word)
		    {
		 	    write (1, &argv[1][start_of_word],1);
		 	    start_of_word++;		
		    }
		 	if (flag)
		 		write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}