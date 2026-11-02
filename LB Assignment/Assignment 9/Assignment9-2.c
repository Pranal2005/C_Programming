#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iRetX = 0;

    iRetX = iNo * 70;

    return iRetX;
}


int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}