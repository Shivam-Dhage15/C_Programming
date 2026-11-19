///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and accept one character.
// Reverse that String in place.
//
//  input = "Marvellous Multi OS"        
//              
//  input = 'M'
//      
//  output = 11
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  StrRevX                                
//  Input :          String                                              
//  Output :         String                                            
//  Description :    Display Reverses the string in place                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move the end pointer to the last character of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Move back to the last valid character

    // Swap characters from start and end until they meet in the middle
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String is: %s\n", str);
}
    


int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    StrRevX(Arr);
 
    return EXIT_SUCCESS;

}