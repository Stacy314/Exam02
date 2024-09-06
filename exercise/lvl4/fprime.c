int	main(int argc, char **argv)
{
	int	i = 1;
	int	number = 0;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number == 1)
        {
			printf("1\n");
            return 0;
        }

        while(number >= ++i)
        {
            if (number % i == 0)
            {   
                printf("%d", i);
                if (number == i)
                    break;
                printf("*");
                number = number / i;
                i = 1;
            }
        }
	}
	printf("\n");
}