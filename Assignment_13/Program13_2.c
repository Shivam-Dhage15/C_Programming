///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and return the count of
// odd Digits.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountOdd                                   
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Count Frequency of an odd Digit                        
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int iCnt = 0,  iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd digit : %d \n",iRet);

    return EXIT_SUCCESS;
}
    