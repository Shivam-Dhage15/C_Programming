///////////////////////////////////////////////////////////////////////////
//  Write a Program which acccept string from user and display in reverse order.
//
//  input = "MarvellouS"
//  output = SuoellavraM
//
//  input = "XYZ"
//  output = ZYX
//  
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ReverseString                           
//  Input :          String                                              
//  Output :         Reverse of string                                           
//  Description :    Reverse the string and display it                  
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>



void ReverseString(char *str)
{
    int iLength = 0;
    char *start = str;
    char *end = str;

    // Calculate the length of the string
    while(*end != '\0')
    {
        iLength++;
        end++;
    }
    end--; // Move back to the last character

    // Swap characters from both ends
    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[20] = {'\0'};
   
    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    ReverseString(Arr);
    printf("Reversed String : %s\n", Arr);

    return EXIT_SUCCESS;

}
    
  

