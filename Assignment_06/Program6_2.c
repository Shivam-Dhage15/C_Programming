/////////////////////////////////////////////////////////////
//  Function Name :  CheckAdmission
//  Input :          float
//  Output :         float
//  Description :    Check Admisssion eligibility based on marks and age
//  Date :           21/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((iAge < 0) || (fMarks < 0 || fMarks >100))
    {
        printf("Invalid Input\n");
    }
    else if(iAge >= 17 && fMarks >= 60)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf(" Not Eligible for Admission");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age : \n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}