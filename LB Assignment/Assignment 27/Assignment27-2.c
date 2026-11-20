#include <stdio.h>

// Input :  "Marvellous"
// Output : 9

int CountSmall(char *str)
{
    // Logic
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}