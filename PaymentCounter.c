#include<stdio.h>
#include<time.h>
int main()
{
    char *months[12] = {
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
    scanf("%lf", &amountOwed);

    printf("And how much will you be paying back each month? ");
    scanf("%lf", &paymentAmount);
    
    printf("Type in a number for the month will you start paying: 1.Jan 2.Feb 3.Mar 4.Apr 5.May 6.Jun 7.Jul 8.Aug 9.Sep 10.Oct 11.Nov 12.Dec ");

    scanf(" %i", &currentMonthIndex);
    currentMonthIndex--;

    printf("and what year? ");
    scanf("%i", &currentYear);
    
    while(amountOwed > paymentAmount) { //replace 0 with paymentAmount variable to fix
        if(amountOwed < paymentAmount) {
        amountOwed -= amountOwed;
        }
    
        amountOwed -= paymentAmount;
        totalPaid += paymentAmount;

        printf(months[currentMonthIndex]);
        printf(" %i ", currentYear);
        currentMonthIndex++;
        if(currentMonthIndex == 12) {
            currentMonthIndex = 0;
            }
        
        
        
        if(currentMonthIndex == 11) {
            currentYear++;
        }
         
        
        printf(" Total Paid: %lf. Amount remaining: %lf.\n ", totalPaid, amountOwed);
    
    }
        
    
return 0;

    
    
}

