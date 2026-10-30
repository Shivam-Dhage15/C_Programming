////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print that number    //
// of $ and * on screen.                                                  //
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Pattern                                              //
//  Input :          int                                                  //
//  Output :         Symbols                                              //
//  Description :    Print the specified pattern                          //
//  Date :           30/10/2026                                           //
//  Author :         Shivam Damodar Dhage                                 //
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}