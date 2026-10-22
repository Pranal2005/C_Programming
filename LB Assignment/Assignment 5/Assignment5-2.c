#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    // Write your logic here
    if(iYear <= 0)
    {
        printf("Invalid Year");
        return;
    }

    if((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}