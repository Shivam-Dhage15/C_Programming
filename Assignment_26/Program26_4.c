///////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is special Symbol or not
//  (!,@,#,$,^,&,*)
//
//  input = F                    
//  output = False
//      
//  input = %
//  output = True
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkSpecial                               
//  Input :          Character                                              
//  Output :         Boolean                                            
//  Description :    Check it is special Symbol or not                   
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage                              
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


int ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Special Symbol\n");
    }
    else
    {
        printf("It is not a Special Symbol\n");
    }

    return EXIT_SUCCESS;

}