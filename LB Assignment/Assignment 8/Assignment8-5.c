#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iResult = 0;
    

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        iResult = iNo * iCnt;
        printf("%d\t",iResult);
    } 
}


int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}