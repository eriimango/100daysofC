// This program reads user input date in a specific format and outputs is different format then inputted
// author: Ericka H.
#include <stdio.h>
#include <string.h>

int main(void) {
char month[12][10]= {"January","February","March", "April","May","June","July","August",
       "September","October", "November","December"};
char date[11];
int i; // iterate loops
int s1; // 1st slash '\'
int s2; // 2nd slash '\'
int m; // month
//int n; // number
//int pos; // ?? position

// prompt user to enter a date in given format
printf("Enter a date (mm/dd/yyyy): ");
scanf("%s", date);

for(i=0; i<=10; i++)
 if(date[i]=='/') {
  s1=i;
  break;
 }
if(s1 ==1)
m = date[0]-48;
else
m = (date[0]-48)*10+date[1]-48;

printf("%s ", month[m-1]);
for(i=s1+1; i<=10; i++)
if(date[i] =='/') {
s2 = i;
break;
}
for(i=s1+1; i<=s2-1; i++)
printf("%c", date[i]);
printf(", ");
for(i=s2+1; i<=s2+4;i++)
    printf("%c", date[i]);
}
