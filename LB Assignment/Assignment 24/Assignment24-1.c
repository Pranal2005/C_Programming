#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// Input :  "Marvellous Multi OS"  e
// Output : TRUE
// Input :  "Marvellous Multi OS"  W
// Output : FALSE

BOOL ChkChar(char *str, char ch)
{
    // Logic
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    printf("Enter the character");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}