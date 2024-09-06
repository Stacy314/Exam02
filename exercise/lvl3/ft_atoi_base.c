#include <stdio.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base - 1 + '0';
	else
		max_digit = digits_in_base - 10 - 1 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (str == NULL || str_base < 2 || str_base > 16)
		return 0;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if (digit == -1)
			break;
		result = result * str_base + digit;
		++str;
	}
	return (result * sign);
}

/*#include <stdio.h>

int main()
{
    const char *str1 = "2A";
    const char *str2 = "1011";
    const char *str3 = "-7F";
    const char *str4 = "  1E";
    
    int base1 = 10;
    int base2 = 2;
    int base3 = 10;
    int base4 = 10;
    
    int result1 = ft_atoi_base(str1, base1);
    int result2 = ft_atoi_base(str2, base2);
    int result3 = ft_atoi_base(str3, base3);
    int result4 = ft_atoi_base(str4, base4);
    
    printf("String: %s, Base: %d, Result: %d\n", str1, base1, result1);
    printf("String: %s, Base: %d, Result: %d\n", str2, base2, result2);
    printf("String: %s, Base: %d, Result: %d\n", str3, base3, result3);
    printf("String: %s, Base: %d, Result: %d\n", str4, base4, result4);

    return 0;
}*/



//ver2

/*int ft_isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		ft_isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		ft_value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;
	while (ft_isblank(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (ft_isvalid(*str, str_base))
		result = result * str_base + ft_value_of(*str++);
	return (result * sign);
}*/