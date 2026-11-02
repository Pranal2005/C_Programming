#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;

    }
    return ifact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}