#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return("-2147483648\0");
    if (nbr == 0)
		return("0\0");
	int n = nbr;
	int len = 0;
	if (nbr <= 0)
		len++; //for minus
	while (n) 
	{
		n /= 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result) 
		return NULL;
	result[len] = '\0';
	//if (nbr == 0)
		//return(result = "0");
	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr; // *-1
	}
	while (nbr) 
	{
		len--; //'\0'
		result[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}