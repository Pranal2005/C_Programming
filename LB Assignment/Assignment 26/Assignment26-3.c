#include <stdio.h>

// Input :  Q
// Output : Q  R  S  T  U  V  W  X  Y  Z
// Input :  m
// Output : m  l  k  j  i  h  g  f  e  d  c  b  a
// Input :  8
// Output :

void Display(char ch)
{
    // Logic
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}