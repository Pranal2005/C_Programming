#include <stdio.h>

// Input :  "Marvellous Multi OS"  M
// Output : 0
// Input :  "Marvellous Multi OS"  W
// Output : -1
// Input :  "Marvellous Multi OS"  e
// Output : 4

int FirstChar(char *str, char ch)
{
    // Logic
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        iCnt++;
        str++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}