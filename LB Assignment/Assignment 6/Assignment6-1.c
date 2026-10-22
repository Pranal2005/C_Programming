#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float iBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid units\n");
    }
    else if(iUnits  <= 100)
    {
        iBill = iUnits * 5.0;
        printf("Bill = %.2f\n",iBill);
    }
    else if(iUnits <= 200)
    {
        iBill = (100 * 5.0) + ((iUnits - 100) * 7.0);
        printf("Bill = %.2f\n",iBill);
    }
    else
    {
        iBill = (100 * 5.0) + (100 * 7.0) + ((iUnits - 200) * 10.0);
        printf("Bill = %.2f\n",iBill);
    }
}
    

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}