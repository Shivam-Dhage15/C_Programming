/////////////////////////////////////////////////////////////
//  Function Name :  CheckLeapYear
//  Input :          integer
//  Output :         integer
//  Description :    check leap year
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void CheckLeapYear(int iYear)
{
    if(iYear <= 0 )
    {
        printf("Invalid Year\n");
    }
    else if(iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter the Numbers : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}