#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 1;

    fCelsius = (fTemp - 32.0f) * (5.0f/9.0f);

    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter temperture in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f",dRet);

    return EXIT_SUCCESS;

}