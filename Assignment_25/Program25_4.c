///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is small case  or not
//
//  input = S                   
//  output = not small
//      
//  input = s
//  output = small
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkSmall                                
//  Input :          Character                                              
//  Output :         Boolean                                            
//  Description :    Check it is small case or not                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage 
//                             
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
   
    

int main()
{
    
    char cValue = '\0';
    BOOL bRet = FALSE;

   
    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Chracter\n");
    }
    else
    {
        printf("It is not a Small Chracter\n");
    }

    return EXIT_SUCCESS;

}