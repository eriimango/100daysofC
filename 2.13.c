// 2.13 is a program using if statements, relational operators, and equality operators.
// author: Ericka Howard

int main( void )
{
   // prompts the user to enter two numbers
   printf( "Enter two integers, and I will tell you\n" );
   printf( "the relationship they satisfy: " );

   int num1; // 1st number to be read from the user
   int num2; // 2nd number to be used from the user

   scanf( "%d %d", &num1, &num2 ); // reads the two numbers entered by user

   // if conditional statement
   if ( num1 == num2 ) {
      printf( "%d is equal to %d\n", num1, num2 );
   }

   if ( num1 != num2 ) {
      printf( "%d is not equal to %d\n", num1, num2 );
   }

   if ( num1 < num2 )  {
      printf( "%d is less than %d\n", num1, num2 );
   }

   if ( num1 > num2 ) {
      printf( "%d is greater than %d\n", num1, num2 );
   }

   if ( num1 <= num2 ) {
      printf( "%d is less than or equal to %d\n", num1, num2 );
   }

   if ( num1 >= num2 ) {
      printf( "%d is greater than or equal to %d\n", num1, num2 );
   }
} // end of program
