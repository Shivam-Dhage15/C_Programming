/////////////////////////////////////////////////////////////
//  Function Name :  DisplayConvert
//  Input :          charachter
//  Output :         charachter
//  Description :    Check whether character is vowel or not
//  Date :           19/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckValue(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'o' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charchter :\n");
    scanf("%c",&cValue);

    bRet = CheckValue(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}