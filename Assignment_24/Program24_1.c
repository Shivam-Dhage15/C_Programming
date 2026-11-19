///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and accept one character.
// Check whether that character is present in string or not
//
//  input = "Marvellous"        
//              
//  input = 'e'
//      
//  output= TRUE   
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkChar                                 
//  Input :          String, Character                                              
//  Output :         Boolean                                            
//  Description :    Checks if the character is present in the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }

    return EXIT_SUCCESS;

}