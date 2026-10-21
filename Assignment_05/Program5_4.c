/////////////////////////////////////////////////////////////
//  Function Name :  CheckMultipleDivisibility
//  Input :          int
//  Output :         int
//  Description :    Check Divisibility
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

CheckMultipleDivisibility(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        printf("It is Divisible by both");
    }
    else if(iNo % 3 == 0)
    {
        printf("It is Divisible by 3");
    }
    else if(iNo % 5 == 0)
    {
        printf("It is Divisible by 5");
    }
    else
    {
        printf("not Divisible by either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}