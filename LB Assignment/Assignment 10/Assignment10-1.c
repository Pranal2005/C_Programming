#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double Area = 1;
    float PI = 3.14;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%f",dRet);

    return EXIT_SUCCESS;
}

