/////////////////////////////////////////////////////////////
//  Function Name :  FindGreatest
//  Input :          integer, integer, integer
//  Output :         integer
//  Description :    Find the greatest number among three numbers
//  Date :           20/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        printf("%d is greater\n",iNo1);
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        printf("%d is greater\n",iNo2);
    }
    else
    {
        printf("%d is greater\n",iNo3);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter the Numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}