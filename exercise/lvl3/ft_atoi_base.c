#include <stdio.h>

char to_lower(char str)
{
    if (str >= 'A' && str <= 'Z')
        str += 32;
    return str;
}

int get_digit(char c, int str_base)
{
    int max;

    if (str_base <= 10)
        max = str_base - 1 + '0';
    else
    max = str_base - 10 - 1 + 'a';

    if (c >= '0' && c <= '9' && c <= max)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max)
        return(10 + c - 'a');
    else 
        return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
    int res;
    int sign = 1;
    int digit;

    if (!str || str_base < 2 || str_base > 16)
        return 0;
    while (*str < 33)
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while (*str)
    {
        digit = get_digit(to_lower(*str), str_base);
        if (digit == -1)
            break;
        res = res * str_base + digit;
        str++;
    }
    return (res * sign);
}