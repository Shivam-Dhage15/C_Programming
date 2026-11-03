///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts three numbers and prints its Multiplication
// 
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Multiply                                 
//  Input :          int                                              
//  Output :         int                                                
//  Description :    Print Multiplication.                      
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    iMult = (iNo1 * iNo2 * iNo3);
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the Value1 :\n");
    scanf("%d",&iValue1);

    printf("Enter the Value2 :\n");
    scanf("%d",&iValue2);

    printf("Enter the Value3 :\n");
    scanf("%d",&iValue3);


    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("multiplication : %d\n",iRet);
    
    
    return EXIT_SUCCESS;
}
