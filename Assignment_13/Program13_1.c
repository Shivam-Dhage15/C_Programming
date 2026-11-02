///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and return the count of
// Even Digits.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountEven                                     
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Count Frequency of an Even Digit                        
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n" );
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of Even Digit : %d",iRet);

    return EXIT_SUCCESS;
}
    