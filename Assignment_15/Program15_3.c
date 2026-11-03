///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts two number from user and check whether
// that numbers are equal or not.
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkEqual                                  
//  Input :          int                                              
//  Output :         String                                                
//  Description :    check whether that numbers are equal or not.                      
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the Value1 :\n");
    scanf("%d",&iValue1);

    printf("Enter the Value2 :\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    
    return EXIT_SUCCESS;
}
