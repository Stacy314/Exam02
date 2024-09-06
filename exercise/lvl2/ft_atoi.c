int	ft_atoi(const char *str)
{
   	int integer = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-' || *str == '+')
    {
        if (*str == '-')
		 sign = -1;
        str++;
    }
	while (*str >= '0' && *str <= '9')
	{
		integer = integer * 10 + *str - 48;
		str++;
	}
	return (sign * integer);
}
