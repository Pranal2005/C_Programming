#include <stdio.h>

// Input :  "MarvellouS"
// Output : 6  (8-2)

int Difference(char *str)
{
    // Logic
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }
    return iSmall - iCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}