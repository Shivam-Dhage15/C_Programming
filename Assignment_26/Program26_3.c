
///////////////////////////////////////////////////////////////////////////
//  Accept a character from user, if it is capital then display all the 
//  charcter from the input character till Z.if it is small then display 
//  all the charcter from the input character in reverse order till a.
//  and in other cases return directly the input character.
//
//  input = Q
//  output = Q R S T U V W X Y Z
//
//  input = m
//  output = m l k j i h g f e d c b a
//
//  input = 4
//  output = 4
//
//
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Input :          char
//  Output :         char
//  Description :    Display Output based on input character
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
        for(int i = ch; i <= 'Z'; i++)
        {
            printf("%c ",i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(int i = ch; i >= 'a'; i--)
        {
            printf("%c ",i);
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
