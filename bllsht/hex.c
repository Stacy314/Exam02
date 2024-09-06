#include <unistd.h>

int ft_atoi(char *str,int *counter)
{
    int number=0;
    int counter=0;;

    while(*str)
    {
        number = number * 10 + str[counter] - 48; 
        counter++;
    }
    return number;
}

void hex(numtohex, int *counter)
{
    char *hex = calloc(0, counter*sizeof(char));
    if(hex==0)
    {
        return NULL;
    }
    while(1)
    {
        hex[0]=numtohex%16;
        




    }
}

int main(int argc, char **argv)
{
    int *counter=0;
    int numtohex=0;
    if (argc == 1)
    {

        numtohex=ft_atoi(*argv[1],&counter);
        hex(numtohex);

    }
}