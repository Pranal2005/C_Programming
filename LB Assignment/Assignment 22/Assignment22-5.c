/*
Enter number of elements
8
2       4       6       8       10      12      14      16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2); // Even numbers
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}