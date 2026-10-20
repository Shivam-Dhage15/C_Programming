/////////////////////////////////////////////////////////////
//  Function Name :  CheckDivisibility
//  Input :          integer
//  Output :         integer
//  Description :    Check whether number is divisible by 5 or not 
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckDivisibility(int iNo)
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

    bRet = CheckDivisibility(iValue);

    if(bRet == TRUE)
    {
        printf("The number is Divisible by 5\n");
    }
    else
    {
        printf("The number is not divisible by 5\n");
    }
    
    return EXIT_SUCCESS;
}
