///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and display its Digits in  
// Reverse order.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  DisplayDigit                                      
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display Digits in reverse order                          
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
   int iDigit = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   while(iNo != 0 )
   {
      iDigit = iNo % 10;

      printf("%d\n",iDigit);

      iNo = iNo / 10;
   }

}

int main()
{
   int iValue = 0;

   printf("Enter Digit : \n");
   scanf("%d",&iValue);

   DisplayDigit(iValue);

   return EXIT_SUCCESS;
}