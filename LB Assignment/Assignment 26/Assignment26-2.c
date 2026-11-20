#include <stdio.h>

// Input :  Q
// Output : q
// Input :  m
// Output : M
// Input :  4
// Output : 4
// Input :  %
// Output : %

void Display(char ch)
{
    // Logic
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}