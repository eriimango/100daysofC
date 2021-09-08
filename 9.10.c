// 9.10 solve.. this program converts integer Fahrenheit temps from 0 to 212 degrees
// to floating-point Celsius temp w/ 3 digits of precision.
// author Ericka H.
#include<stdio.h>

int main(void) {
int f_temp; // Fahrenheit
float c_temp; // Celsuis

printf("Enter a temperature in Fahrenheit (0-212): \n ");
scanf("%d", &f_temp);

// loops for temp range condition
if (f_temp >= 0 && f_temp <= 212) {

c_temp = 5.0 / 9.0 *(f_temp - 32);

printf("Fahrenheit: %10d\tCelsuis: %12.3f\n", f_temp, c_temp);
f_temp++;
}

}
