///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts range from user and display all numbers  
// in between that range in Reverse order.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  RangeDisplayRev                                      
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display the numbers in reverse order based on range                           
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
   int iCnt = 0;

   if(iStart > iEnd)
   {
      printf("Invalid Input\n");
      exit(0);
   }

   for(iCnt = iEnd; iCnt >= iStart; iCnt--)
   {
      printf("%d\t",iCnt);
   }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter Starting Point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : \n");
   scanf("%d",&iValue2);

   RangeDisplayRev(iValue1,iValue2);


   return EXIT_SUCCESS;
}