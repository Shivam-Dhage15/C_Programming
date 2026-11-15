///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 4        iCol = 5
//
//      2    4   6   8   10
//      1    3   5   7   9
//      2    4   6   8   10
//      1    3   5   7   9
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
        if(i % 2 == 0)
        {
            iCnt = 1;
        }
        else
        {
            iCnt = 2;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
            iCnt = iCnt + 2;
        }
        printf("\n");
    }
    printf("\n");

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}