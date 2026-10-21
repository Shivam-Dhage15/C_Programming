/////////////////////////////////////////////////////////////
//  Function Name :  CheckTriangle
//  Input :          int, int, int 
//  Output :         int
//  Description :    Check Whether the triangle is is valid or not
//  Date :           21/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1,int iSide2,int iSide3)
{
    if((iSide1 < 0) || (iSide2 < 0) || (iSide3 < 0))
    {
        printf("All sides must be Positive");
    }
    else if((iSide2 + iSide3 > iSide1) && (iSide1 + iSide3 > iSide2) &&( iSide1 + iSide2 > iSide3))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}
int main()
{
    int iSide1 = 0, iSide2 = 0,iSide3 = 0;

    printf("Enter Sides of a Triangle : \n");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);
    return EXIT_SUCCESS;
}
