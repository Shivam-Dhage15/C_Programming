///////////////////////////////////////////////////////////////////////////
//  Accept Division of student from user and depends on the division display 
//  exam timing. 
//
//  input = A                  
//  output = Your exam at 7 AM
//      
//  input = B
//  output = Your exam at 8.30 AM
//     
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  DisplaySchedule                                
//  Input :          Character                                              
//  Output :         int                                            
//  Description :    Display exam schedule based on division                     
//  Date :           19/11/2026                                           
//  Author :         Shivam Damodar Dhage 
//                             
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
} 
   
    

int main()
{
    
    char cValue = '\0';
    

   
    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

  
    return EXIT_SUCCESS;

}