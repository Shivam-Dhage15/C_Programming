/////////////////////////////////////////////////////////////
//  Function Name :  CalculateElectricityBill
//  Input :          integer
//  Output :         float
//  Description :    Calculating electricity bill based on electricity unit consumed
//  Date :           21/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
 {
    float fBill = 0.0f;
    if(iUnits < 0)
    {
        printf("Invalid Units");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("The bill Amount is %f RS",fBill);
    }
    else if(iUnits > 100 && iUnits <=200)
    {
        fBill = iUnits * 7;
        printf("The bill Amount is %f RS",fBill);
    }
    else
    {
        fBill = iUnits * 10;
        printf("The bill Amount is %f RS",fBill);
    }
 }

int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}