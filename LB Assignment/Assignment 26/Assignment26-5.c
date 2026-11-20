#include <stdio.h>

// Input :  A
// Output : Decimal      65
//          Octal        0101
//          Hexadecimal  0X41

void Display(char ch)
{
    // Logic
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}