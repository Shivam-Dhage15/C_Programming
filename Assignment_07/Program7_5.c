////////////////////////////////////////////////////////////////////////////
// Write a program which accept N from user and print 
// 5 multiples of N on screen.                                            
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  OddDisplay                                              
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the odd numbers                                    
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                                 
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}