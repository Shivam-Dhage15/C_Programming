////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print the number     //
// till that number on screen.                                            //
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Display                                              //
//  Input :          int                                                  //
//  Output :         int                                                  //
//  Description :    Print the numbers                                    //
//  Date :           30/10/2026                                           //
//  Author :         Shivam Damodar Dhage                                 //
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}