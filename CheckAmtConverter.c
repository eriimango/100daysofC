// 8.34 this program reads user input of a check amount and writes and outputs it a word amount
// author: Ericka H.
#include <stdio.h>
#include <string.h>

int main(void) {
char aNums[10][10] = {"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
char bNums[10][10] = {"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINTEEN"};
char cNums[10][10] = {"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHT","NINTY"};
char dNums[10][10] = {"HUNDRED","THOUSAND"};
float amount; // full check amount
int num;
int t;
int p;
int decm; // decimal point/ cents
int fAmt; // first part of number before decimal
float cents; // cents from amount

// user enters a dollar amount in numerics
printf("Enter amount: ");
scanf("%f", &amount);

// conversion of cent to xx/100
fAmt = (int)amount;
cents = amount-fAmt;
cents = ((int)(cents * 100 + .5) / 100.0);
decm =(int)(cents*100);
num =fAmt;

// for numbers that is in the teens char bNums(11-19)
if (num>= 10 && num < 20) {
        t = num%10;
printf("%s-", bNums[t-1]);
}
// for numbers that is 20 or above - 100 (cNums)
if(num>19 && num <=100) {
    t = num/10;
    num = num%10;
printf("%s-", cNums[t-1]);
}
// for numbers over 100 (dNums)
if (num > 99) {
printf(" and %s ",dNums[num-1]);
}
if (num < 10) {
printf("%s", aNums[num-1]);
}
printf(" and %d/100", decm);
}
