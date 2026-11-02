///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts number from user and return the
// multiplication of Digits.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  MultDigit                                   
//  Input :          int                                              
//  Output :         int                                                
//  Description :    return multiplication of all digits.                      
//  Date :           31/10/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultDigit(int iNo)
{
    int iMult = 1, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

    return iMult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Multiplication : %d",iRet);
    
    return EXIT_SUCCESS;
}