#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            ifact = ifact * iCnt;
        }
    }
    return ifact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}