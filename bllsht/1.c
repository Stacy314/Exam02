char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
			count++; 
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
    }

    char **substr = malloc(sizeof(char *) * (count + 1));
    i = 0;
    while(str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
        if (i > j)
        {
            substr[k] = malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(substr[k], &str[j], i - j);
            k++;
        }
    }
    substr[k] = '\0';
    return(substr);
} 