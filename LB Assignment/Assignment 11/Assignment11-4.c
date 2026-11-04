#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > 0 && iStart < iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
            iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
    else
    {
        printf("Invalid Range");

        return EXIT_FAILURE;
    }   
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending pointing: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != 1)
    {
    printf("%d",iRet);
    }

    return EXIT_SUCCESS;
}