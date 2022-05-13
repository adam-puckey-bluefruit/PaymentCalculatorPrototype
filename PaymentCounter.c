#include<stdio.h>

int main()
{
    enum  { success = 0, warning = 1, failure = -1 };
    
    const char *months[12] = {
        "January",
        "Feb",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" };
    
    
    double paymentAmount;
    double totalPaid = 0;
    int currentMonthIndex;
    int currentYear;
    double amountOwed;

    printf("Input amount owed here: ");
    scanf("%lf", &amountOwed); //what if they hit return with no input? - CRASH do while loop? 

    printf("And how much will you be paying back each month? ");
    scanf("%lf", &paymentAmount);
    
    printf("Type in a number for the month will you start paying: 1.Jan 2.Feb 3.Mar 4.Apr 5.May 6.Jun 7.Jul 8.Aug 9.Sep 10.Oct 11.Nov 12.Dec ");

    scanf(" %i", &currentMonthIndex); // validation checking, error handling and enabling typing? range checking - what happens if 13 or 0 is typed? - CRASH! No input? CRASH!
    currentMonthIndex--;

    printf("and what year? ");
    scanf("%i", &currentYear);
    
    while(amountOwed > 0) 
    { 
        if(amountOwed < paymentAmount) 
        {
            paymentAmount = amountOwed;
        }
    
        amountOwed -= paymentAmount;
        totalPaid += paymentAmount;

        printf("%s, %d\n", months[currentMonthIndex], currentYear);
        printf(" Total Paid: %.2f. Amount remaining: %.2f.\n ", totalPaid, amountOwed);
        
        currentMonthIndex++;

        if(currentMonthIndex > 11) 
        {
            currentMonthIndex = 0;
        }
        
        if(currentMonthIndex == 0) 
        {
            currentYear++;
        }
    }
    return 0;  
}

