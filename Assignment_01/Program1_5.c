/////////////////////////////////////////////////////////////
//  Function Name :  Accept
//  Input :          Taking input Integer from user
//  Output :         Print number of star(*) on Screeen
//  Description :    Perform Iteration by using for loop
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n ");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}