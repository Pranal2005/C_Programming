#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Input :  7
// Output : TRUE
// Input :  d
// Output : FALSE

BOOL ChkDigit(char ch)
{
    // Logic
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}