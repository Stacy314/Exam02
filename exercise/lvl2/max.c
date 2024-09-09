int		max(int* tab, unsigned int len)
{
    if (len == 0)
        return 0;
    int max = tab[0]; 
    int i = 1;

    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}
