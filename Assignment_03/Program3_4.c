/////////////////////////////////////////////////////////////
//  Function Name :  DisplayConvert
//  Input :          charachter
//  Output :         charachter
//  Description :    Print upper Case 
//  Date :           19/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
    printf("%c",cValue + 32 );
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",cValue - 32);
    }
    else
    {
        printf("Invalid Input");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter Charchter :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}