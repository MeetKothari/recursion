#include <stdio.h>
#include <stdlib.h>

int power( double x, int n ) ;

int main( int argc, char *argv[] ) {

  int base, a, result;

  printf("Enter base number: ");

  scanf("%d", &base);

  printf("Enter power number(positive integer): ");

  scanf("%d", &a);

  result = power(base, a);

  printf("%d^%d = %d", base, a, result);

  return 0;

}

int power(double base, int a) {

  if (a != 0) return (base * power(base, a - 1));

  else

    return 1;
}
