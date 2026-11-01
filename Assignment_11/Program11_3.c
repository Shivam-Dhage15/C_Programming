///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts range from user and display Addition of all   
// numbers in between that range
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  RangeSum                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display the Addition of the range                          
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
   int iCnt = 0;
   int iSum = 0;

   if(iStart > iEnd)
   {
      printf("Invalid Input\n");
      exit(0);
   }
   

   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
      iSum = iSum + iCnt;
   }

   return iSum;
}

int main()
{
   int iValue1 = 0, iValue2 = 0;
   int iRet = 0;

   printf("Enter Starting Point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : \n");
   scanf("%d",&iValue2);

   iRet = RangeSum(iValue1,iValue2);

   printf("Sum of All range : %d",iRet);


   return EXIT_SUCCESS;
}