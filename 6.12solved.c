// 6.12d solve : will create a one- dimensional array using loops to a)read 20 elements of sales, b)add 1000 to each 75 elements of allowance
//  c)initialize 50 elements of integers numbers to zero, d)and print 10 values of integer GPA
// author: Ericka Howard
#include<stdio.h>

int main(void) {
int i;
int gpa[10];

printf("Enter 10 graded scores: \n");

for(i=0; i < 10; i++)
    scanf("%d", &gpa[i]);

for(i=0; i < 10; i++)
   printf("GPA[%d]=%d\n", i+1, gpa[i]);
}
