char *ft_strrev(char *str)
{
	int start = 0;
	int end = 0;
	char temp;

	end = 0;
	while (str[end])
		end++;
	end--; //'\0'
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}