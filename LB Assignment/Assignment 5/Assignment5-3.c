#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    // Write your logic here
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks");
        return;
    }

    if(fMarks >= 90 && fMarks <= 100)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade C");
    }
    else if(fMarks >= 40 && fMarks <= 59)
    {
        printf("Grade D");
    }
    else // Below 40
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}