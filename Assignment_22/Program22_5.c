///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//      input = 8      
//  
//      2   4   6   8   10  12  14  16      
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Pattern                                 
//  Input :          int                                              
//  Output :         Pattern                                              
//  Description :    Display Pattern of given number of rows and columns                     
//  Date :           15/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",i * 2);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    

    printf("Enter Number of Elements :\n");
    scanf("%d",&iValue);


    Pattern(iValue);

    return EXIT_SUCCESS;
}