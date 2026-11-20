#include <stdio.h>

// Input :  "MarvellouS"
// Output : 0
// Input :  "MarvellouS Infosystems"
// Output : 1
// Input :  "MarvellouS Infosystems by Piyush Manohar Khairnnar"
// Output : 5

int CountWhite(char *str)
{
    // Logic
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}