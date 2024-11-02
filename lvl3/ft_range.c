#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i = 0;
	int len = end - start;

	range = (int *)malloc(sizeof(int) * (len + 1));
	if (i <= len)
	{
		if (start < end)
		{
			range[i] = start;
			start++;
			i++;
		}
		else
		{ 
			res[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}