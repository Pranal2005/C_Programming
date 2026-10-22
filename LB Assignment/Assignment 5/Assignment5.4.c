#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    // Write your logic here
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}