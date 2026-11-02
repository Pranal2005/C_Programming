#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fWidth, float fHeight)
{
    double Area = 1;

    Area = fWidth * fHeight; 

    return Area;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter length: ");
    scanf("%f",&fValue2);

    dRet = CircleArea(fValue1, fValue2);

    printf("%f",dRet);

    return EXIT_SUCCESS;
}

