///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts range from user and display even numbers
// in between that range
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  RangeDisplayEven                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display the Even numbers from the range                          
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayEvenRange(int iStart, int iEnd)
{
   int iCnt = 0;

   if(iStart > iEnd)
   {
      printf("Invalid Input\n");
      exit(0);
   }
   

   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
      if(iCnt % 2 == 0)
      {
         printf("%d\t",iCnt);
      }
   }

}

int main()
{
   int iValue1 = 0, iValue2 = 0;
   

   printf("Enter Starting Point : \n");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : \n");
   scanf("%d",&iValue2);

   DisplayEvenRange(iValue1,iValue2);

   return EXIT_SUCCESS;
}