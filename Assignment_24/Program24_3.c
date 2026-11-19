///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and accept one character.
// Return index of first occurence of that character from string
//
//  input = "Marvellous"        
//              
//  input = 'M'
//      
//  output= 0
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  FirstChar                                
//  Input :          String, Character                                              
//  Output :         int                                            
//  Description :    Returns the index of the first occurrence of the character in the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int FirstChar(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        str++;
        iCount++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    printf("Index of the first occurrence of the character is : %d\n", iRet);

    return EXIT_SUCCESS;

}