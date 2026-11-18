///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 6        iCol = 6
//
//      
//     *    *   *   *   *   *
//     *    #   #   #   *   *                       
//     *    #   #   *   $   *
//     *    #   *   $   $   *
//     *    *   $   $   $   *
//     *    *   *   *   *   *
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Pattern                                 
//  Input :          int                                              
//  Output :         Pattern                                              
//  Description :    Display Pattern of given number of rows and columns                     
//  Date :           14/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
/////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(i + j < iRow + 1)
            {
                printf("#\t");
            }
            else if(i + j == iRow + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows: ");
    scanf("%d", &iValue1);

    printf("Enter Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
