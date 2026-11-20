#include <stdio.h>

// Input :  "MarvellouS"
// Output : "SuollevraM"

void Reverse(char *str)
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
    printf("%s", str);
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}