/////////////////////////////////////////////////////////////
//  Function Name :  CalculateBonus
//  Input :          float
//  Output :         float
//  Description :    Calculating Bonus based on salary and experience
//  Date :           21/10/2026
//  Author :         Shivam Damodar Dhage
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears < 0 || fSalary < 0 )
    {
        printf("Amount is invalid");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * (15.0f/100);

        printf("Bonus Amount is %f",fBonus);
    }
    else if(iYears <= 10 && iYears >= 5)
    {
        fBonus = fSalary * (10.0f/100);

        printf("Bonus Amount is %f",fBonus);
    }
    else
    {    
        fBonus = fSalary * (5.0f/100);

        printf("Bonus Amount is %f",fBonus);
    
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service : \n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}