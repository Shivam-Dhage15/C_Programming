//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Input :          Integer,Integer
// Output:          Prints Marvellous 5 times on screen
// Description :    Performs Iteration using for loop
// Date :           18/10/2026
// Author :         Shivam Damodar Dhage
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <=  5; iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{

    Display();
    
    return EXIT_SUCCESS;
}