///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and count frequency of a  
// such a number which are less than 6
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Count                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Count Frequency of a number which are less than 6                         
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      
      if(iDigit < 6)
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

   iRet = Count(iValue);

   printf("Count : %d",iRet);

   return EXIT_SUCCESS;
}