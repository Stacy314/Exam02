#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *rrange;
	int i = 0;
	int len = end - start;

	rrange = (int *)malloc(sizeof(int) * (len + 1));
	if (i <= len)
	{
		if (start > end)
		{
			rrange[i] = end;
			end++;
			i++;
		}
		else
		{ 
			res[i] = end;
			end--;
			i++;
		}
	}
	return (rrange);
}