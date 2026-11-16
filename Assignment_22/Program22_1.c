///////////////////////////////////////////////////////////////////////////
// Accept Number of rows and number of columns from user and display below    
// Pattern.
//
//  input = 5        
//  
//      A   B   C   D   E       
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
    char ch = '\0';
    for(i = 1, ch ='A'; i <= iNo; i++ ,ch++)
    {
        printf("%c\t",ch);
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