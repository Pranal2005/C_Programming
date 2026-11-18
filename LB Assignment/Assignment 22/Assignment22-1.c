/*
Enter number of elements
5
A       B       C       D       E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", 'A' + i - 1);
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