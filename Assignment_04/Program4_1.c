/////////////////////////////////////////////////////////////
//  Function Name :  CheckNumber
//  Input :          integer
//  Output :         integer
//  Description :    Check whether number is positive or negative  
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("The Number is positive");
    }
    else if(iNo < 0)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The Number is Zero");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}