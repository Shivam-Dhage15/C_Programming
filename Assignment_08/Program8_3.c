////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print factorial of   
// given number
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Factorial                                              
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the factorial                                
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %d",iRet);

    return EXIT_SUCCESS;
}