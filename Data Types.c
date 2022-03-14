#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double x;
    char z[128];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &a);
    scanf("%lf", &x);
    scanf("%*[\n] %[^\n]", z);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + a);
    // Print the sum of the double variables on a new line.
    printf("%.01lf\n", d + x);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s", s, z);
  
    return 0;
}