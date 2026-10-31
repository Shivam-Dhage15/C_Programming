///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts distance in km and convert it into meter. 
// 
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  KMtoMeter                                         
//  Input :          int                                                
//  Output :         int                                                
//  Description :    Print the conversion of km into meter                             
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
   int iAns = 0;
   

   iAns = iNo * 1000;

   return iAns;
}

int main()
{
   int iValue = 0;
   
   int iRet = 0;

   printf("Enter the Distance in km : \n");
   scanf("%d",&iValue);

   iRet = KMtoMeter(iValue);

   printf("The distance in meter : %d",iRet);

   return EXIT_SUCCESS;
}