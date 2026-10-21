/////////////////////////////////////////////////////////////
//  Function Name :  CalculateDiscount
//  Input :          float
//  Output :         float
//  Description :    Calculating final Payable amount after applying the discount
//  Date :           21/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0 )
    {
        printf("Amount is invalid");
    }
    else if(fAmount <= 1000)
    {
        fDiscount = fAmount * (0.0f/100);
        fFinalAmount = fAmount - fDiscount;

        printf("Final Amount is %f",fFinalAmount);
    }
    else if(fAmount <= 5000)
    {
        fDiscount = fAmount * (10.0f/100);
        fFinalAmount = fAmount - fDiscount;
        
        printf("Final Amount is %f",fFinalAmount);
    }
    else
    {    
        fDiscount = fAmount * (20.0f/100);
        fFinalAmount = fAmount - fDiscount;
        
        printf("Final Amount is %f",fFinalAmount);
    
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}