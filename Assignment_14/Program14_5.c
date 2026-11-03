///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and display difference   
// between summation of all its factors and non factors
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  FactDiff                                 
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display summation of all its  Non Factors.                     
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int  FactDiff(int iNo)
{
    int iCnt = 0, iFsum = 0, iNsum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFsum = iFsum + iCnt;
        }   
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNsum = iNsum + iCnt;
        }   
    }

    return iFsum - iNsum;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter Number :  \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference : %d\n",iRet);

    return EXIT_SUCCESS;
}