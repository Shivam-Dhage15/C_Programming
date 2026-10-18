/////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Input :          Taking Integer input from user
//  Output :         Print either Hello or Demo based on condition
//  Description :    Perform Selection using if else
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}