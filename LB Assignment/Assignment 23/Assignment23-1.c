#include <stdio.h>

// Input :  "Marvellous Multi OS"
// Output : marvellous multi os

void strlwrX(char *str)
{
    // Logic
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    strlwrX(arr);

    printf("Modified string is %s", arr);

    return 0;
}