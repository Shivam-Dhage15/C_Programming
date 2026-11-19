///////////////////////////////////////////////////////////////////////////
// Write a Program which Accept String from user and count Number of
// white spaces from that string
//
//  input = "Marvellous Multi OS"        
//  
//  output= 2       
//     
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountWhite                                 
//  Input :          String                                              
//  Output :         int                                            
//  Description :    Counts the number of white spaces in the string                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("Number of white spaces in the string is %d\n", iRet);

    return EXIT_SUCCESS;

}