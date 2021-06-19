// 6.14 solve : this program displays all the unique numbers in a collection of two sets
// author: Ericka Howard
#include<stdio.h>

int main(void) {
int i;
int j;
int arr1[10]; // first set of numbers
int arr2[10]; // second set of numbers entere

printf("Enter 10 numbers for the 1st set of 'Numbers': \n");
for(i=0; i < 10; i++)
scanf("%d", &arr1[i]);

printf("Enter 10 numbers for the 2nd set of 'Numbers': \n");
for(i=0; i < 10; i++)
scanf("%d", &arr2[i]);

   printf("The unique numbers from both sets of 'Number' are: \n");

   // this condition finds all unique numbers and display it (no duplicate values
   // for arr1
   for(i = 0; i < 10; i++) {
    int n = arr1[i];
    int n1 = 0;
   for( j = 0; j < 10; j++)
     if (arr1[j] == n || arr2[j] == n)
        n1++;
     if(n1==1)
        printf(" %d ", arr1[i]);
   }
     // for arr2
   for(i = 0; i < 10; i++) {
    int n = arr2[i];
    int n1 = 0;
   for( j = 0; j < 10; j++)
     if (arr1[j] == n || arr2[j] == n)
        n1++;
     if(n1==1)
        printf(" %d ", arr2[i]);
}

}
