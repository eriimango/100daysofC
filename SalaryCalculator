// This salary calculator program will determine the gross pay for each employee inputed
// author: Ericka H.
#include<stdio.h>

int main(void) {

// declared variables
int hours; // hours employee works

float rate = 0; // rate employee is payed per hour
float salary = 0; // the amount payed after total hours worked

while( hours != -1){ // loops to continue to take employees information until "-1" to end
printf( "Enter # of hours worked (-1 to end): " ); // prompts user to enter total hours worked in a weeks span
scanf( "%d", &hours ); // reads hours input

printf( "Enter hourly rate of the employee ($00.00): $" ); // prompts users to enter the pay rate per hour for the employee
scanf( "%f", &rate ); // reads rate input

salary = hours * rate; // calculate salary based on hours and rate input

if( hours > 40) { // condition if employee entered more than 40 hour which is considered over time
   hours -= 40; // calculate total amount of over time hours
   salary += ((hours * rate)/2); // calculates the new salary with over time pay of time in a half.
}

printf( "Salary is $%.2f", salary ); // displays the results of the employees salary pay
printf( "\n\n"); // format a blank line for continued loop

if( hours == -1){ // condition that will end program if user in puts "-1" for hours prompt
    return 0;
}
}

}
