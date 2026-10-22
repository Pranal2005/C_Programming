#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input");
        return;
    }

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15f; // 15%
    }
    else if(iYears >= 5) // 5 to 10 years
    {
        fBonus = fSalary * 0.10f; // 10%
    }
    else // less than 5 years
    {
        fBonus = fSalary * 0.05f; // 5%
    }

    printf("Bonus = %.2f", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of services: \n");
    scanf("%f %d",&fSalary ,&iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}