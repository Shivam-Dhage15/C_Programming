///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts total Marks and obtained marks 
// prints its Percentage.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  percentage                                  
//  Input :          int                                              
//  Output :         String                                                
//  Description :    Print Percentage                      
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercent = 0.0f;

    if(iObtained == 0)
    {
        iObtained = 1;
    }

    fPercent = (float)iObtained / iTotal * 100;
    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter the Value1 :\n");
    scanf("%d",&iValue1);

    printf("Enter the Value2 :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage : %f\n",fRet);
    
    
    return EXIT_SUCCESS;
}
