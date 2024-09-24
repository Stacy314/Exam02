#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while (*str == '+' || (*str >= 9 && *str <= 13))
        str++;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res);
}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n/10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac <= 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    else
    {
        int n = ft_atoi(av[1]);
        int i = 1;
       while (i <= 9 && n < 238609295)
       {
            ft_putnbr(i);
            write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
       }
    }
}