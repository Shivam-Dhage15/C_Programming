////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and display its  table in 
// Reverse Order.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  TableRev                                             
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the Reverse table                               
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
   int iCnt = 0;
   int iAns = 0;
   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 10; iCnt >= 1; iCnt--)
   {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
   }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}