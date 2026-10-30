////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print its number     
// line on screen.                                            
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Display                                              
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the number line                                  
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                                 
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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