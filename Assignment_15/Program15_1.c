///////////////////////////////////////////////////////////////////////////
// Write a Program which accepts name from user and print that Name
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  -                                   
//  Input :          String                                              
//  Output :         String                                                
//  Description :    Print Name.                      
//  Date :           3/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter Full Name :\n");
    scanf("%[^\n]",&Name);

    printf("Your name is %s",Name);

    return EXIT_SUCCESS;
}