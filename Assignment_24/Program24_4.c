///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and accept one character.
// Return index of last occurrence of that character from string
//
//  input = "Marvellous Multi OS"        
//              
//  input = 'M'
//      
//  output = 11
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  LastChar                                
//  Input :          String, Character                                              
//  Output :         int                                            
//  Description :    Returns the index of the last occurrence of the character in the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int LastChar(char *str, char ch)
{
    int iIndex = -1;
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;
        }
        str++;
        iCount++;
    }
    return iIndex;
    
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Index of the last occurrence of the character is : %d\n", iRet);

    return EXIT_SUCCESS;

}