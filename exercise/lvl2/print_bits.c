
void	print_bits(unsigned char octet)
{
    int i;
    unsigned char mask;

    i = 7;
    while (i >= 0)
    {
        mask = (1 << i);
        

        if (octet & mask)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}