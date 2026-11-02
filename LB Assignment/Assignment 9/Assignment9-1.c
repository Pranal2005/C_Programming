#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

/*
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}
*/

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}