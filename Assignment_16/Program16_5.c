///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 4        iCol = 5
//
//      1   2   3   4
//      5   6   7   8
//      9   10  11  12
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

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;
    iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
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