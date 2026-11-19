///////////////////////////////////////////////////////////////////////////
//  Write a Program which acccept string from user and return difference between number
//  of capital and small letters from that string.
//
//  input = "MarvellouS"
//  output = 6 (8-2)
//  
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  Difference                              
//  Input :          String                                              
//  Output :         Difference between number of capital and small letters                                           
//  Description :    Count difference between number of capital and small letters in the string                 
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }
    return (iCountSmall - iCountCapital);
}
   
  

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;
   
    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);
    printf("Difference between capital and small letters : %d\n", iRet);

    return EXIT_SUCCESS;

}