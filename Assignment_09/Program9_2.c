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

int DollarToINR(int iDoller)
{
   int iRupess = 0;

   iRupess = iDoller * 70;

   return iRupess;

}

int main()
{
     int iDollar = 0;
     int iRet = 0;

     printf("Enter the Number : \n");
     scanf("%d",&iDollar);

     iRet = DollarToINR(iDollar);

     printf("%d",iRet);

     return EXIT_SUCCESS;
}