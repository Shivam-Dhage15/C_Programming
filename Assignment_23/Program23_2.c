///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user  and convert it into 
// Uppercase
//
//  input = "Marvellous Multi OS"        
//  
//  output= "MARVELLOUS MULTI OS"       
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  struprx                                 
//  Input :          char                                              
//  Output :         char                                            
//  Description :    Lowercase to Uppercase conversion                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
     int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }

        str++;
    }
}



int main()
{

    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;

}