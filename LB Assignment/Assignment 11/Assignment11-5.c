#include<stdio.h>
#include<stdlib.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > 0 && iStart < iEnd)
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t",iCnt);   
        }
    }
    else
    {
        printf("Invalid Range");
    }   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending pointing: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}