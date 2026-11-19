///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and Display it Acii value in decimal, octal
//  and hexadecimal format.
//
//  input = A                    
//  output = Decimal : 65
//           Octal : 101
//           Hexadecimal : 41
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  DisplayASCII                                
//  Input :          Character                                              
//  Output :         Ascii value                                           
//  Description :    Display ASCII value of the character                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int DisplayASCII(char ch)
{
    printf("Decimal : %d\n", ch);
    printf("Octal : %o\n", ch);
    printf("Hexadecimal : %X\n", ch);
}
   
    

int main()
{
    
    char cValue = '\0';
    BOOL bRet = FALSE;

   
    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    DisplayASCII(cValue);

    return EXIT_SUCCESS;

}