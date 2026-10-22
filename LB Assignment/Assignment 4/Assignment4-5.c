#include<stdio.h>
#include<stdlib.h>

void CheckDivisbility(int iNo)
{
    if(iNo%5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    CheckDivisbility(iValue);

    return EXIT_SUCCESS;
}