int    ft_strcmp(char *s1, char *s2)
{
    int i  = 0;

    while (s2[i] == s1[i] && s2[1])
        i++;
    return(s1[i] - s2[i]);
}