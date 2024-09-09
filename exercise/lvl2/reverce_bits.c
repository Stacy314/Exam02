unsigned char reverse_bits(unsigned char octet)
{
    int i = 7;
    unsigned char res = 0;  // Initialize result to 0

    while (i >= 0)
    {
        res += (octet & 1) << i;  // Take the least significant bit and shift it
        octet >>= 1;  // Shift the octet to the right to process the next bit
        i--;
    }
    return res;
}

/*#include <stdio.h>
int main()
{
    unsigned char octet, expected;

    octet = 0b00001111;  // 15 in decimal
    expected = 0b11110000;  // 240 in decimal
    printf("Original: %d\n", octet);
    printf("Reversed: %d\n", reverse_bits(octet));
    printf("Expected: %d\n", expected);

    return 0;
}*/