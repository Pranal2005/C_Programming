#include <stdio.h>

// Input :  "Marvellous Multi OS"
// Output : MARVELLOUS MULTI OS

void struprX(char *str)
{
    // Logic
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    struprX(arr);

    printf("Modified string is %s", arr);

    return 0;
}