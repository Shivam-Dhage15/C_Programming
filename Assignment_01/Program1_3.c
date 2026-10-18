/////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Input :          Integer
//  Output :         Prints 5 to 1
//  Description :    Perform Iteration by using while loop
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;
    iCnt = 5;

    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }

}

int main()
{
    Display();

    return EXIT_SUCCESS;
}