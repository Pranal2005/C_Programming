#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dFeet = 0.0;

    dFeet = iNo * 0.0929;

    return dFeet; 
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf",dRet);

    return EXIT_SUCCESS;
}