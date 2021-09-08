// 10.10 this program displays the use of bitwise shift operators
// author : Ericka Howard
#include<stdio.h>

void displayBits(unsigned int value); // prototype

int main(void) {
int value;

printf("Enter a value(This program will right shift the entered value by 4): ");
scanf("%d",&value);
displayBits(value);
value = value >> 4; // shifts user value right by 4
displayBits(value);
getch();
}


void displayBits(unsigned int value) {
int x, y;
x = y = 0;
for (y = 15; y >= 0; y--) {
x = value / (1 << y);
value = value - x *(1 << y);
printf("%d", x);
}
printf("\n");
}
// after execution my system returns 0s in the vacated bits
