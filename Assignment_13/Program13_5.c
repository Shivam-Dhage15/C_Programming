///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and return difference 
// between summation of even digits and summation of odd digits.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  MultDigit                                   
//  Input :          int                                              
//  Output :         int                                                
//  Description :    return Difference betweeen Summation of Even Digitd and odd Digits.                      
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iEvenSum = 0, iOddSum = 0,  iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iOddSum = iOddSum + iDigit;
        }
        else
        {
            iEvenSum = iEvenSum + iDigit;

        }

        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference : %d \n",iRet);

    return EXIT_SUCCESS;
}