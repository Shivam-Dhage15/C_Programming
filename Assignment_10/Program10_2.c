///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts width and height of rectangle from user and calculate 
// its area. 
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  RectangleArea                                           
//  Input :          float                                                
//  Output :         double                                                
//  Description :    Print the Area of rectangle                             
//  Date :           30/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

double RectangleArea(float fWidth, float fHeight)
{
   double dAns = 0.0;
   const double pi = 3.14;

   dAns = fWidth * fHeight;

   return dAns;
}

int main()
{
   float fValue1 = 0.0f;
   float fValue2 = 0.0f;
   double dRet = 0.0;

   printf("Enter the Width : \n");
   scanf("%f",&fValue1);

   printf("Enter the height : \n");
   scanf("%f",&fValue2);

   dRet = RectangleArea(fValue1, fValue2);

   printf("The area of a Rectangle %lf",dRet);

   return EXIT_SUCCESS;
}