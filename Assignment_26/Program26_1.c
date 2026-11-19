///////////////////////////////////////////////////////////////////////////
//  Write a Program which display Ascii Table. Table contains symbol, 
//  Decimal, Hexadecimal and Octal representation of all characters 
//  from 0-255.
//
//  
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  DisplayAscii                                
//                                           
//  Description :    Display Ascii Table             
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage 
//                             
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplayAscii(char ch)
{
    int i = 0;
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    for(i = 0; i <= 255; i++)
    {
        printf("%c\t\t%d\t\t%x\t\t%o\n", i, i, i, i);
    }
}
   
    

int main()
{
    
    DisplayAscii('\0');

  
    return EXIT_SUCCESS;

}