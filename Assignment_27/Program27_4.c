///////////////////////////////////////////////////////////////////////////
//  Write a Program which acccept string from user and check whether it contains 
//  vowels or not.
//
//  input = "MarvellouS"
//  output = True
//
//  input = "XYZ"
//  output = False
//  
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CheckVowels                              
//  Input :          String                                              
//  Output :         Boolean value (True/False)                                           
//  Description :    Check if the string contains any vowels                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE; 
        }
        str++;
    }
    return FALSE; 
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowels(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowels.\n");
    }
    else
    {
        printf("String does not contain vowels.\n");
    }

    return EXIT_SUCCESS;
}
    
  

