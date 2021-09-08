// This program that will produce the final velocity and distanced transversed of an object.
// author: Ericka H.
#include <stdio.h>
#include <math.h>

int main(void)
{
    // declared variables using float integers
    double u; // initial / original velocity
    double a; // acceleration
    double t; // time elapsed

    printf( "Enter the initial velocity of the object: " ); // prompts user to enter value for u
    scanf( "%d", &u ); //reads the value

    printf( "Enter the acceleration of the object: " );
    scanf( "%d", &a );

    printf( "Enter the time elapsed: ");
    scanf( "%d", &t );

    //calculates new velocity
    double v; // new velocity variable declared
    v = u + (a * t);

    double s; // distanced traversed
    t = sqrt(t);
    s = ( u * t ) + ( (0.5)*( a*t)) ;

    printf( "The final velocity of the object is %d\n", v ); // prints the final velocity
    printf( "The distance the object traversed is %d", s ); // prints the distance the object traversed
}
