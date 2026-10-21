#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChckEven(int iNo)
{
    if(iNo/2 == 0)
    {
        return TRUE;   
    }
    else
    {
         return FALSE;
    }   
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = ChckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even\n");   
    }
    else
    {
         printf("Number is odd\n");
    }
    return 0;
}


