// This program accepts two separate integers from the user (a value and a power) and left shift the calculated input by 1 bit and displays
// the results.
// author: Ericka H.
#include <stdio.h>

void displayResult (unsigned value);
unsigned power2(unsigned value, unsigned power);

int main(void) {
   unsigned value;
   unsigned result;
   unsigned power;

   printf("Enter a value: \n");
   scanf("%u", &value);

   printf("Enter a power: \n");
   scanf("%u", &power);

      result = power2(value, power);
      printf("The result in bits: %u", result);
      display(result);

   printf(" The result is: \n");
   display(power2);
}

unsigned power2(unsigned value, unsigned power) {
return value << power;
}

void display(unsigned value) {
unsigned c;
unsigned mask = 1 << 15;
printf("%7u =", value);

for(c=1; c<=16; c++){
value &mask ? putchar('1'): putchar('0');
value <<=1;

if(c%8 == 0){
putchar(' ');
}
}
putchar('\n');
}
