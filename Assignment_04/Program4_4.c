/////////////////////////////////////////////////////////////
//  Function Name :  CheckVotingEligibility
//  Input :          integer
//  Output :         integer
//  Description :    Check Voting eligibility 
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  CheckVotingEligibility(int iAge)
{
    if(iAge < 0 )
    {
        printf("Invalid Age");
    }
    else if(iAge >= 18)
    {
        printf("The Person is Eligible for Voting");
    }
    else
    {
        printf("The Person is not Eligible for Voting");
    }
}


int main()
{
    int iAge = 0;

    printf("Enter the Age :\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}