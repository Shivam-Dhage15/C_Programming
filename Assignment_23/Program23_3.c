///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and toggle the case 
// 
//
//  input = "Marvellous Multi OS"        
//  
//  output= "mARVELLOUS mULTI oS"       
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  strtogglex                                 
//  Input :          char                                              
//  Output :         char                                            
//  Description :    Toggles the case of each character                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
     int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtogglex(Arr);

    printf("Modified String is %s",Arr);

    return EXIT_SUCCESS;

}