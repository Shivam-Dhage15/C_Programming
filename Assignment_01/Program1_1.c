//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Divide
// Input :          Integer,Integer
// Output:          Integer
// Description :    Performs Division
// Date :           18/10/2026
// Author :         Shivam Damodar Dhage
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;  
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);
    printf("Division is %d\n",iRet);

    return EXIT_SUCCESS;
}