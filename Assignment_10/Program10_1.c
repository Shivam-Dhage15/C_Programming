///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts radius of circle from user and calculate 
//its area. Consider the value of pi = 3.14  
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CircleArea                                           
//  Input :          float                                                
//  Output :         double                                                
//  Description :    Print the Area of Circle                             
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
   double dAns = 0.0;
   const double pi = 3.14;

   dAns = (pi * fRadius * fRadius);

   return dAns;
}

int main()
{
   float fRadius = 0.0f;
   double dRet = 0.0;

   printf("Enter the Radius : \n");
   scanf("%f",&fRadius);

   dRet = CircleArea(fRadius);

   printf("The area of a circle %lf",dRet);

   return EXIT_SUCCESS;
}