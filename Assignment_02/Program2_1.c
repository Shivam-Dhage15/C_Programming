/////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Input :          Taking Integer input from user
//  Output :         Print number of star(*) on Screeen
//  Description :    Perform Iteration by using while loop and also add updator
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }


}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
