#include <stdio.h>

// Input :  No Input
// Output : Symbol  Decimal  Hexadecimal  Octal
//          A       65       41           101
//          B       66       42           102
//          ... Up to 255

void DisplayASCII()
{
    // Logic
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}