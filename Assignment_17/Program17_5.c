///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 4        iCol = 4
//
//      1   2   3   4   
//      2   3   4   5
//      3   4   5   6
//      4   5   6   7
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Pattern                                 
//  Input :          int                                              
//  Output :         Pattern                                              
//  Description :    Display Pattern of given number of rows and columns                     
//  Date :           12/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1; i <= iRow; i++)
    {
        iCnt = i;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt++);
        }

        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}