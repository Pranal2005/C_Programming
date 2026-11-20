#include <stdio.h>

// Input :  "Marvellous Multi OS"  M
// Output : 2
// Input :  "Marvellous Multi OS"  W
// Output : 0

int CountChar(char *str, char ch)
{
    // Logic
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    printf("Enter the character");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}