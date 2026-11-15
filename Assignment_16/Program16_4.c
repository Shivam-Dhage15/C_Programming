///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 4        iCol = 5
//
//      4   4   4   4   4
//      3   3   3   3   3
//      2   2   2   2   2
//      1   1   1   1   1
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Pattern                                 
//  Input :          int                                              
//  Output :         Pattern                                              
//  Description :    Display Pattern of given number of rows and columns                     
//  Date :           7/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}