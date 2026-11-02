#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}