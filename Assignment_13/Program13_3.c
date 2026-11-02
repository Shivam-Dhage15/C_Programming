///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and return the 
// count of digits in between 3 and 7.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountRange                                   
//  Input :          int                                              
//  Output :         int                                                
//  Description :    return multiplication of all digits.                      
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
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

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count : %d",iRet);
    
    return EXIT_SUCCESS;
}