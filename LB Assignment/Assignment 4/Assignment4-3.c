#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst < iSecond)
    {
        printf("%d is Greater",iSecond);
    }
    else if(iSecond < iFirst)
    {
        printf("%d is Greater",iFirst);
    }
    else
    {
        printf("Both Number Are Equal");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two value: \n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}