/////////////////////////////////////////////////////////////
//  Function Name :  PrintEven
//  Input :          integer
//  Output :         integer
//  Description :    print even numbers on screen 
//  Date :           18/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    //Filter
    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
          
        printf("%d\t",iCnt*2);
       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}