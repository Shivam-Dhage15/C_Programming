///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts area in square feet and convert it 
// into square meters.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  SquareMeter                                       
//  Input :          float                                             
//  Output :         double                                                
//  Description :    Print the conversion of Square feet to square meter                             
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

double SquareMeter(float fMeter)
{
   double dMeter= 0.0;

   dMeter = fMeter * 0.0929;

   return dMeter;
}

int main()
{
   float fFeet = 0.0f;
   
   double dRet = 0.0;

   printf("Enter Area in Square Feet : \n");
   scanf("%f",&fFeet);

   dRet = SquareMeter(fFeet);

   printf("The Temperature in Square Meter : %lf",dRet);

   return EXIT_SUCCESS;
}