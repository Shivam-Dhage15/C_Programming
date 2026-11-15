///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  iRow = 4        iCol = 4
//
//      A   B   C   D
//      a   b   c   d
//      A   B   C   D
//      a   b   c   d
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
    char ch = '\0';

    for(i = 1; i <= iRow ; i++)
    {
        if(i % 2 == 0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
        
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}