///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user  and convert it into 
// Lowercase
//
//  input = "Marvellous Multi OS"        
//  
//  output= "marvellous multi os"       
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  strlwrx                                 
//  Input :          String                                              
//  Output :         String                                             
//  Description :    Uppercase to Lower case conversion                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  strlwrx(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }

        str++;
    }
}

int main()
{

    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;

}