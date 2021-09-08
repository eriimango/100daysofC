// This program reads user input of a check amount and writes and outputs it into a check-protected format
// author: Ericka H
#include <stdio.h>
#include <string.h>

int main(void) {
char chk_amt[9];
char prtct_num[9];
int i = 0; // iterate loops
int index = 0;
int len = strlen(chk_amt); //check the length of amount (convert match[9])


printf("Enter the amount of a check: $"); //user inputs check amount
scanf("%s", chk_amt);


while(len < 9) {
     prtct_num[index++] = '*'; // places protected format in front of input
     len++;
}
while(index < 9) {
      prtct_num[index++]= chk_amt[i++];  // writing from input check for new formatting
}

printf("%s\n", prtct_num); // outputs new format
}
