///////////////////////////////////////////////////////////////////////////
//  Write a Program which acccept string from user and count number
// of capital letters from that string.
//
//  input = "Marvellous Multi OS"
//  output = 4
//  
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountCapital                                
//  Input :          String                                              
//  Output :         Number of capital letters                                           
//  Description :    Count capital letters in the string                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
   
  

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;
   
    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);
    printf("Number of capital letters : %d\n", iRet);

    return EXIT_SUCCESS;

}