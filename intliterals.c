/*
  Example demonstrating different ways to specify integer literals in C

  Jim Teresco
  CSC 433, Programming Languages
  The College of Saint Rose
  Fall 2012

  Updated for CSIS-340, Siena College, Fall 2023
*/

#include <stdio.h>

int main() {

  // let's set some ints and see what they are (when printed in base 10)
  int a = 100;    // standard base 10
  int b = 0100;   // octal -- leading 0 indicates this
  int c = 0x100;  // hex -- leading 0x indicates this
  int d = 1e2;    // 1x10^2 scientific notation
  int e = -100;   // standard negative
  int f = -0100;   // negative octal
  int g = -0x100;  // negative hex
  int h = -1e2;    // -1x10^2 scientific notation

  printf("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, g=%d, h=%d\n", 
	 a, b, c, d, e, f, g, h);

  return 0;
}
