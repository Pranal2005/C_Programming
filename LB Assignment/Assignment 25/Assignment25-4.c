#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Input :  g
// Output : TRUE
// Input :  D
// Output : FALSE

BOOL ChkSmall(char ch)
{
    // Logic
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}