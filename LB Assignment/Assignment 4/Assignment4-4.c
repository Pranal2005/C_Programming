#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else if(iAge >= 0 && iAge < 18)
    {
        printf("Not Eligible for Voting");
    }
    else
    {
        printf("Invalid Age");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);
    
    return EXIT_SUCCESS;
}