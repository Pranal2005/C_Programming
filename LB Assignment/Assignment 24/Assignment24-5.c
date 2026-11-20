#include <stdio.h>

// Input :  "abcd"
// Output : "dcba"
// Input :  "abba"
// Output : "abba"

void StrRevX(char *str)
{
    // Logic
    char *start = str;
    char *end = str;
    char cTemp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}