///////////////////////////////////////////////////////////////////////////
// Write a Program to find Difference Between Odd Factorial and Even Factorial of a given number
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  FactorialDiff                                           
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the Difference of even factorial and odd factorial.                            
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
   int iCnt = 0, iFactOdd = 1, iFactEven = 1, iFact = 0;

   
   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= iNo ; iCnt++)
   {
      if((iCnt % 2)  != 0)
      {
         iFactOdd = iFactOdd * iCnt;
      }
      else
      {
         iFactEven = iFactEven * iCnt;
      }
   }

   iFact = iFactEven - iFactOdd;
   return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   iRet = FactorialDiff(iValue);

   printf("%d",iRet);

   return EXIT_SUCCESS;
}