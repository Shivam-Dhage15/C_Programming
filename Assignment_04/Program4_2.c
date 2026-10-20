/////////////////////////////////////////////////////////////
//  Function Name :  CheckeEvenOdd
//  Input :          integer
//  Output :         integer
//  Description :    Check whether number is Even or Odd  
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
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

    bRet = CheckEvenOdd(iValue);

    if(bRet == TRUE)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }
    
    return EXIT_SUCCESS;
}
