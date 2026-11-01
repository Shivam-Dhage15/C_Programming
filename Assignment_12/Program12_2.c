///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and check whether it   
// contains zero or not.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkZero                                      
//  Input :          int                                              
//  Output :         String                                                
//  Description :    check whether contains zero or not.                          
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   int iDigit = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }
   if(iNo == 0)
   {
      return TRUE;
   }

   while(iNo != 0 )
   {
      iDigit = iNo % 10;

      if(iDigit == 0)
      {
         return TRUE;
      }

      iNo = iNo / 10;
   }
   return FALSE;
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   bRet = ChkZero(iValue);

   if(bRet == TRUE)
   {
      printf("It Contains Zero");
   }
   else
   {
      printf("It does not Contains Zero");
   }

   return EXIT_SUCCESS;
}