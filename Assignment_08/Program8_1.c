////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and if numbar is less than 
// 50 then print small , if it is greater than 50 and less than 100 then 
// print medium , if it is greater than 100 print large                                           
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  OddDisplay                                              
//  Input :          int                                                  
//  Output :         string                                                  
//  Description :    Print the size base on condition                                
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("The Number is Small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("The Number is Medium\n");
    }
    else
    {
        printf("The Number is Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}