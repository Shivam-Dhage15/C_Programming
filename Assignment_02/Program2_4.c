/////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Input :          integer,integer
//  Output :         integer
//  Description :    Print first Number in Second number of times
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Frequency :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return EXIT_SUCCESS;
}