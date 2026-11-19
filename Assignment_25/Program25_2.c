///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is Capital or not
//
//  input = S                   
//  output = Capital
//      
//  input = s
//  output = Not Capital
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkCapital                                
//  Input :          Character                                              
//  Output :         Boolean                                            
//  Description :    Check it is Capital alphabet or not                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Chracter\n");
    }
    else
    {
        printf("It is not a Capital Chracter\n");
    }

    return EXIT_SUCCESS;

}