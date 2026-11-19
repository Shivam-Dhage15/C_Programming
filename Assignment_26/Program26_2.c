
///////////////////////////////////////////////////////////////////////////
//  Accept a character from user, if it is small then display its
//  corresponding capital character, and if it is capital then display
//  its corresponding small character.
//  In other cases display as it is.
//
//  input = Q
//  output = q
//
//  input = m
//  output = M
//
//  input = 4
//  output = 4
//
//  input = %
//  output = %
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Input :          char
//  Output :         character
//  Description :    Display corresponding character
//  Date :           19/11/2026
//  Author :         Shivam Damodar Dhage
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("%c\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
