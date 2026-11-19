///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is alphabet or not
//
//  input = F                    
//  output = True
//      
//  input = %
//  output = False
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkAlpha                                
//  Input :          Character                                              
//  Output :         Boolean                                            
//  Description :    Check it is alphabet or not                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int ChkAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Chracter\n");
    }
    else
    {
        printf("It is not a Chracter\n");
    }

    return EXIT_SUCCESS;

}