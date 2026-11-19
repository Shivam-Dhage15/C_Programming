///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is digit or not
//
//  input = S                   
//  output = Capital
//      
//  input = s
//  output = Not Capital
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkDigit                                
//  Input :          Character                                              
//  Output :         Boolean                                            
//  Description :    Check it is digit or not                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage 
//                             
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return EXIT_SUCCESS;

}