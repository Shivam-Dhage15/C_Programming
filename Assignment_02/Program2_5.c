/////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Input :          integer
//  Output :         integer
//  Description :    Check whether number is even or odd
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo %2 == 0)
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

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is an Even Number\n",iValue);
    }
    else
    {
        printf("%d is an Odd Number\n",iValue);
    }

    return EXIT_SUCCESS;
}