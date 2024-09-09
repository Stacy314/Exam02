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
        return (c - '0');  // -48
    else if (c >= 'a' && c <= 'f' && c <= max)
        return (10 + c - 'a');  // -87
    else
        return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int digit;

    if (!str || str_base < 2 || str_base > 16)
        return 0;

    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;
    
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }
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

/*int main()
{
    const char *str1 = "2A";
    const char *str2 = "1011";
    const char *str3 = "-7F";
    const char *str4 = "  1E";
    
    int base1 = 16;  // Hexadecimal for "2A"
    int base2 = 2;   // Binary for "1011"
    int base3 = 16;  // Hexadecimal for "-7F"
    int base4 = 16;  // Hexadecimal for "  1E"
    
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
