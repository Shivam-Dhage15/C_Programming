///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and display summation of   
// all its non factors
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  SumNonFact                                 
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Display summation of all its  Non Factors.                     
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all its non Factors : %d\n",iRet);


    return EXIT_SUCCESS;
}