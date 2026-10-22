#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    // Write your logic here
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest", iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest", iSecond);
    }
    else
    {
        printf("%d is Greatest", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}