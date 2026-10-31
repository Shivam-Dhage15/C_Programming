///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts temperature in Fareheneit and convert it 
// into Celsius
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  FhtoCs                                        
//  Input :          float                                             
//  Output :         double                                                
//  Description :    Print the conversion of  Fareheneit to Celsius                             
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
   double dCelsius = 0.0;

   dCelsius = (fTemp - 32) * (5.0/9.0);

   return dCelsius;
}

int main()
{
   float fValue = 0.0f;
   
   double dRet = 0.0;

   printf("Enter the Temperature : \n");
   scanf("%f",&fValue);

   dRet = FhtoCs(fValue);

   printf("The Temperature in Celsius : %lf",dRet);

   return EXIT_SUCCESS;
}