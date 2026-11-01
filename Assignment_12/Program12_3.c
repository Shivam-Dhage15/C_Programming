///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and count frequency  of 2  
// in it.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountTwo                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Count Frequency of Two                          
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
   int iDigit = 0;
   int iCnt = 0 ;

   while(iNo != 0)
   {
      iDigit = iNo % 10;

      if(iDigit == 2)
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

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   iRet = CountTwo(iValue);
   printf("The Frequency of Two : %d",iRet);
   
   return EXIT_SUCCESS;
}


