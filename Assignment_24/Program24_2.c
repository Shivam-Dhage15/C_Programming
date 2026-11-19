///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and accept one character.
// Return frequency of that character from string
//
//  input = "Marvellous"        
//              
//  input = 'l'
//      
//  output= 2
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountChar                                 
//  Input :          String, Character                                              
//  Output :         int                                            
//  Description :    Checks if the character is present in the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountChar(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet = CountChar(Arr, cValue);

    printf("Frequency of the character is : %d\n", iRet);

    return EXIT_SUCCESS;

}