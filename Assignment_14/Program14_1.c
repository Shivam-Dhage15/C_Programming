///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and display its  
// multiplication of factors.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  MultFactors                                  
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Factors Multiplication                      
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFactors(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAns = iAns * iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultFactors(iValue);

    printf("Multiplication of factors is : %d \n",iRet);

    return EXIT_SUCCESS;
}