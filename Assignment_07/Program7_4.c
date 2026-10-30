////////////////////////////////////////////////////////////////////////////
// Write a program which accept N from user and print 
// all odd number up to N on screen.                                            
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

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}