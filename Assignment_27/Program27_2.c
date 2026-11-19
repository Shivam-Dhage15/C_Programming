///////////////////////////////////////////////////////////////////////////
//  Write a Program which acccept string from user and count number
//  of small letters from that string.
//
//  input = "Marvellous Multi OS"
//  output = 10
//  
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  CountSmall                               
//  Input :          String                                              
//  Output :         Number of small letters                                           
//  Description :    Count small letters in the string                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(Arr);
    printf("Number of small letters : %d\n", iRet);

    return EXIT_SUCCESS;

}