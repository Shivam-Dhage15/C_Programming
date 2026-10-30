///////////////////////////////////////////////////////////////////////////
// Write a Program to find Even Factorial of a given number
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  EvenFactorial                                           
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the Even Factorial on Screen                              
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0, iFact = 1;

   
   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= iNo ; iCnt++)
   {
      if((iCnt % 2)  == 0)
      {
         iFact = iFact * iCnt;
      }

   }
   
   return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   iRet = EvenFactorial(iValue);

   printf("%d",iRet);

   return EXIT_SUCCESS;
}