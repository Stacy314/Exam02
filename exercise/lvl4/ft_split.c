#include <stdlib.h>

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
			count++; //count of substr
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **substr = (char **)malloc(sizeof(char *) * (count + 1)); //allocate memory for ptr
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j) // i != j
		{
			substr[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(substr[k], &str[j], i - j); // len of word
            k++;
		}
	}
	substr[k] = '\0';
	return (substr);
}

/*int main()
{
    char str[] = "Hello, this is a test string with multiple words";
    
    // Call ft_split and get the array of substrings
    char **result = ft_split(str);
    
    // Print each substring
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("Substring %d: %s\n", i, result[i]);
        free(result[i]); // Don't forget to free the memory for each substring
    }

    free(result); // Free the array of pointers itself
    return 0;
}*/