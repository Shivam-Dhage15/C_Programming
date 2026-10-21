/////////////////////////////////////////////////////////////
//  Function Name :  DisplayGrade
//  Input :          float
//  Output :         float
//  Description :    Display Grade based on marks
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if(fMarks >= 75 && fMarks < 90)
    {
        printf("Grade B\n");
    }
    else if(fMarks >= 60 && fMarks < 75)
    {
        printf("Grade C\n");
    }
    else if(fMarks >= 40 && fMarks < 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter the Marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}