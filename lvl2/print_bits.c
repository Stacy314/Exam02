
void	print_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 7;
    while (i >= 0)
    {
        bit = (1 << i);
        if (octet & bit)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}