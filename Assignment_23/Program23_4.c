///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and display digits 
// from that string
//
//  input = "Marvellous12345"        
//  
//  output= 12345       
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  DisplayDigits                                 
//  Input :          char                                              
//  Output :         int                                            
//  Description :    Displays the digits from the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DisplayDigits(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c ", *str);
            iCount++;
        }

        str++;
    }

    return iCount;
}


int main()
{

    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return EXIT_SUCCESS;

}