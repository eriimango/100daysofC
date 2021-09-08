// This program will demonstrate sales tax by user input monthly tax collections, calculating the tax variations,
// and displaying the result of state and county tax.
// author: Ericka H.
#include <stdio.h>

int main(void) {

// initialized variables
double c = .05; // county tax percent
double s = .04; // state tax percent

// declared variables
double total; // user total collections earned in 1 month
double county; // the calculated county tax based on total earned
double state; // the calculated state tax based on total earned
double taxSum; // the total of both taxes (state and county)
double sales; // the amount before tax (profit margin)

char month[10]; // string variable of month to calculate

printf( "Enter total amount collected (-1 to quit): $"); // prompts user total input
scanf( "%d", &total ); // reads input

if ( total == -1) { // condition to end the program if user enters -1 in initial prompt
    return 0;
}

// tax and earning calculations
state = total * s ; // calculated state tax based on total collected earnings
county = total * c ; // calculated county tax based on total collected earnings
taxSum = state + county; // combined total of both state and county tax
sales = total - taxSum;  // calculated amount of total earnings collected before taxed

printf( "Enter name of month: " ); // prompts user to enter the month in which the earnings tax report is for
scanf( "%s", &month ); // reads month input

printf( "For the month of %s", month , " :"); // displays month the report is for
printf( "\nTotal Collections: $%d\n", total); // displays the original amount of total earnings entered
printf( "Sales: $%d\n", sales ); // displays the profit margin of sales (before tax)
printf( "County Sales Tax: $%d\n", county ); // displays only the amount of county taxed
printf( "State Sales Tax: $%d\n", state); // displays only the amount state taxed
printf( "Total Sales Tax Collected: $%d\n", taxSum); // displays the total of all taxed
}
