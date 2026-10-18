/////////////////////////////////////////////////////////////
//  Function Name :  CheckDivisible
//  Input :          Integer
//  Output :         Divisible or Not Divisible
//  Description :    Check whether number is divisible by 5 or not
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == TRUE)
    {
        printf("It is Divisible by 5");
    }
    else
    {
        printf("It is not Divisible by 5");
    }


    return EXIT_SUCCESS;
}