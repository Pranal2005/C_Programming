#include <stdio.h>

// Input :  C
// Output : Your exam at 9.20 AM
// Input :  d
// Output : Your exam at 10.30 AM

void DisplaySchedule(char chDiv)
{
    // Logic
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}