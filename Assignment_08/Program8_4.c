////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and display its  table
// 
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Table                                              
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the table                               
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
   int iCnt = 0;
   int iAns = 0;
   if(iNo < 0)
   {
        iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= 10; iCnt ++)
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

    Table(iValue);

    return EXIT_SUCCESS;
}