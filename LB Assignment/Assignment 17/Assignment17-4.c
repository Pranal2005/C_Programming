/*
Enter number of rows and columns
5 5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 1)
            {
                printf("%d\t", j); // Odd row - Positive
            }
            else
            {
                printf("%d\t", -j); // Even row - Negative
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}