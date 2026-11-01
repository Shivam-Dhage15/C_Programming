///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and count frequency  of 4  
// in it.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountFour                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Count Frequency of Four                         
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;

      if(iDigit == 4)
      {
         iCnt++;
      }

      iNo = iNo / 10;
   }

   return iCnt;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   iRet = CountFour(iValue);

   printf("The Frequency of Four : %d",iRet);

   return EXIT_SUCCESS;
}