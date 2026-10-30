///////////////////////////////////////////////////////////////////////////
// Accept amount in US dollar and return its corresponding value in indian
// currency. Consider 1$ = 70Rs
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Display                                             
//  Input :          int                                                  
//  Output :         int                                                  
//  Description :    Print the Pattern                               
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Display(int iNo)
{
   int iCnt = 0;
   int iCount = 0;
   
   if(iNo < 0)
   {
          iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
          printf("*\t");
     }

   for(iCount = 1; iCount <= iNo; iCount++)
   {
          printf("$\t");
   }

}

int main()
{
     int iValue = 0;
     
     printf("Enter the Number : \n");
     scanf("%d",&iValue);

     Display(iValue);

     return EXIT_SUCCESS;
}