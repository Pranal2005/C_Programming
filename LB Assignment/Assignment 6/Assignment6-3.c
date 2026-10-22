#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount\n");
        return;
    }

    if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    } 
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f; // 10% Discount
    }
    else // 5000 and above
    {
        fDiscount = fAmount * 0.20f; // 20% Discount
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %.2f", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}