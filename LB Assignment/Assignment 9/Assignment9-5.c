#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int ifact1 = 1;
    int ifact2 = 1;
    int ifact = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            ifact1 = ifact1 * iCnt;
        }
        else
        {
            ifact2 = ifact2 * iCnt;
        }
        ifact = ifact1 - ifact2;
    }
    return ifact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}