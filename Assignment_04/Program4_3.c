/////////////////////////////////////////////////////////////
//  Function Name :  FindGreater
//  Input :          integer
//  Output :         integer
//  Description :    Find Greater Number  
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int FindGreater(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        return 1;
    }
    else if(iNo1 < iNo2)
    {
        return -1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number ;\n");
    scanf("%d",&iValue2);

    iRet = FindGreater(iValue1,iValue2);

    if(iRet == 1)
    {
        printf("%d is greater\n",iValue1);
    }
    else if(iRet == -1)
    {
        printf("%d is greater\n",iValue2);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return EXIT_SUCCESS;
}
